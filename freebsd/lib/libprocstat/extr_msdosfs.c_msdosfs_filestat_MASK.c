
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct vnstat {int vn_mode; int vn_fileid; int vn_size; int vn_fsid; } ;
struct vnode {int dummy; } ;
struct denode {scalar_t__ de_pmp; int de_Attributes; int pm_mask; int pm_BytesPerSec; scalar_t__ de_StartCluster; scalar_t__ de_dirclust; int de_diroffset; int de_FileSize; int pm_dev; } ;
struct dosmount {scalar_t__ kptr; struct denode data; struct dosmount* next; } ;
struct direntry {int dummy; } ;
typedef int kvm_t ;
typedef int denode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct denode*,scalar_t__) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct dosmount*) ;
 int FUNC_4 (int *,unsigned long,struct denode*,int) ;
 struct dosmount* FUNC_5 (int) ;
 int FUNC_6 (struct denode*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,void*) ;

int
FUNC_9(kvm_t *VAR_5, struct vnode *VAR_6, struct vnstat *VAR_7)
{
 struct denode VAR_8;
 static struct dosmount *VAR_9;
 struct dosmount *VAR_10;
 u_long VAR_11;
 int VAR_12;

 if (!FUNC_4(VAR_5, (unsigned long)FUNC_0(VAR_6), &VAR_8,
     sizeof(VAR_8))) {
  FUNC_8("can't read denode at %p", (void *)FUNC_0(VAR_6));
  return (1);
 }





 for (VAR_10 = VAR_9; VAR_10; VAR_10 = VAR_10->next)
  if (VAR_10->kptr == VAR_8.de_pmp)
   break;

 if (!VAR_10) {
  if ((VAR_10 = FUNC_5(sizeof(struct dosmount))) == ((void*)0)) {
   FUNC_7("malloc()");
   return (1);
  }
  if (!FUNC_4(VAR_5, (unsigned long)VAR_8.de_pmp,
      &VAR_10->data, sizeof(VAR_10->data))) {
   FUNC_3(VAR_10);
       FUNC_8("can't read mount info at %p",
       (void *)VAR_8.de_pmp);
   return (1);
  }
  VAR_10->next = VAR_9;
  VAR_9 = VAR_10;
  VAR_10->kptr = VAR_8.de_pmp;
 }

 VAR_7->vn_fsid = FUNC_2(VAR_5, VAR_10->data.pm_dev);
 VAR_7->vn_mode = 0555;
 VAR_7->vn_mode |= VAR_8.de_Attributes & VAR_1 ? 0 : 0222;
 VAR_7->vn_mode &= VAR_10->data.pm_mask;


 VAR_7->vn_mode |= VAR_8.de_Attributes & VAR_0 ? VAR_3 : VAR_4;
 VAR_7->vn_size = VAR_8.de_FileSize;
 VAR_11 = VAR_10->data.pm_BytesPerSec / sizeof(struct direntry);
 if (VAR_8.de_Attributes & VAR_0) {
  VAR_12 = FUNC_1(&VAR_10->data, VAR_8.de_StartCluster)
      * VAR_11;
  if (VAR_8.de_StartCluster == VAR_2)
   VAR_12 = 1;
 } else {
  VAR_12 = FUNC_1(&VAR_10->data, VAR_8.de_dirclust) * VAR_11;
  if (VAR_8.de_dirclust == VAR_2)
   VAR_12 = FUNC_6(&VAR_10->data, 0) * VAR_11;
  VAR_12 += VAR_8.de_diroffset / sizeof(struct direntry);
 }

 VAR_7->vn_fileid = VAR_12;
 return (0);
}
