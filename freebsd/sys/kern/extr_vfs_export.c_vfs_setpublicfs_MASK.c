
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct netexport {int dummy; } ;
struct TYPE_4__ {int f_fsid; } ;
struct mount {TYPE_1__ mnt_stat; } ;
struct export_args {int * ex_indexfile; } ;
struct TYPE_6__ {int fh_fid; int fh_fsid; } ;
struct TYPE_5__ {int np_valid; char* np_index; struct mount* np_mount; TYPE_3__ np_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mount*,int ,struct vnode**) ;
 int FUNC_1 (struct vnode*,int *) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (int *,char*,scalar_t__,size_t*) ;
 int FUNC_4 (char*,int ) ;
 char* FUNC_5 (scalar_t__,int ,int ) ;
 TYPE_2__ VAR_6 ;
 int FUNC_6 (struct vnode*) ;

int
FUNC_7(struct mount *VAR_7, struct netexport *VAR_8,
    struct export_args *VAR_9)
{
 int VAR_10;
 struct vnode *VAR_11;
 char *VAR_12;






 if (VAR_7 == ((void*)0)) {
  if (VAR_6.np_valid) {
   VAR_6.np_valid = 0;
   if (VAR_6.np_index != ((void*)0)) {
    FUNC_4(VAR_6.np_index, VAR_4);
    VAR_6.np_index = ((void*)0);
   }
  }
  return (0);
 }




 if (VAR_6.np_valid != 0 && VAR_7 != VAR_6.np_mount)
  return (VAR_0);




 FUNC_2(&VAR_6.np_handle, sizeof(VAR_6.np_handle));
 VAR_6.np_handle.fh_fsid = VAR_7->mnt_stat.f_fsid;

 if ((VAR_10 = FUNC_0(VAR_7, VAR_2, &VAR_11)))
  return (VAR_10);

 if ((VAR_10 = FUNC_1(VAR_11, &VAR_6.np_handle.fh_fid)))
  return (VAR_10);

 FUNC_6(VAR_11);




 if (VAR_9->ex_indexfile != ((void*)0)) {
  if (VAR_6.np_index == ((void*)0))
   VAR_6.np_index = FUNC_5(VAR_3 + 1, VAR_4,
       VAR_5);
  VAR_10 = FUNC_3(VAR_9->ex_indexfile, VAR_6.np_index,
      VAR_3, (size_t *)0);
  if (!VAR_10) {



   for (VAR_12 = VAR_6.np_index; *VAR_12; VAR_12++) {
    if (*VAR_12 == '/') {
     VAR_10 = VAR_1;
     break;
    }
   }
  }
  if (VAR_10) {
   FUNC_4(VAR_6.np_index, VAR_4);
   VAR_6.np_index = ((void*)0);
   return (VAR_10);
  }
 }

 VAR_6.np_mount = VAR_7;
 VAR_6.np_valid = 1;
 return (0);
}
