
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct vnode {int dummy; } ;
struct timespec {int dummy; } ;
struct thread {int dummy; } ;
struct mount {int dummy; } ;
struct fuse_entry_out {scalar_t__ entry_valid; scalar_t__ entry_valid_nsec; int generation; } ;
struct componentname {int cn_flags; int cn_namelen; char* cn_nameptr; struct thread* cn_thread; } ;
typedef enum vtype { ____Placeholder_vtype } vtype ;
struct TYPE_2__ {int nlookup; int generation; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*,struct vnode*,struct componentname*,struct timespec*,int *) ;
 struct thread* VAR_2 ;
 int FUNC_4 (struct fuse_entry_out*,struct timespec*) ;
 int FUNC_5 (struct mount*,struct thread*,int ,int,struct vnode**) ;
 int FUNC_6 (struct vnode*,struct vnode*) ;

int
FUNC_7(struct mount *VAR_3,
    struct fuse_entry_out *VAR_4,
    uint64_t VAR_5,
    struct vnode *VAR_6,
    struct vnode **VAR_7,
    struct componentname *VAR_8,
    enum vtype VAR_9)
{
 struct thread *VAR_10 = (VAR_8 != ((void*)0) ? VAR_8->cn_thread : VAR_2);




 uint64_t VAR_11 = VAR_4 ? VAR_4->generation : 0;
 int VAR_12 = 0;

 VAR_12 = FUNC_5(VAR_3, VAR_10, VAR_5, VAR_9, VAR_7);
 if (VAR_12) {
  return VAR_12;
 }
 if (VAR_6 != ((void*)0)) {
  FUNC_1(VAR_8 && (VAR_8->cn_flags & VAR_0) == 0);
  FUNC_1(VAR_8 &&
   !(VAR_8->cn_namelen == 1 && VAR_8->cn_nameptr[0] == '.'));
  FUNC_6(*VAR_7, VAR_6);
 }
 if (VAR_6 != ((void*)0) && VAR_8 != ((void*)0) && (VAR_8->cn_flags & VAR_1) != 0 &&
     VAR_4 != ((void*)0) &&
     (VAR_4->entry_valid != 0 || VAR_4->entry_valid_nsec != 0)) {
  struct timespec VAR_13;

  FUNC_0(*VAR_7, "fuse_vnode_get");
  FUNC_0(VAR_6, "fuse_vnode_get");

  FUNC_4(VAR_4, &VAR_13);
  FUNC_3(VAR_6, *VAR_7, VAR_8, &VAR_13, ((void*)0));
 }

 FUNC_2(*VAR_7)->generation = VAR_11;






 if (VAR_8 == ((void*)0) || ((VAR_8->cn_flags & VAR_0) == 0 &&
     (VAR_8->cn_namelen != 1 || VAR_8->cn_nameptr[0] != '.')))
  FUNC_2(*VAR_7)->nlookup++;

 return 0;
}
