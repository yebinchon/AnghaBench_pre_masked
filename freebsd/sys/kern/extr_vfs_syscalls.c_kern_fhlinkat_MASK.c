
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct thread {int dummy; } ;
struct mount {int dummy; } ;
struct TYPE_5__ {int fh_fid; int fh_fsid; } ;
typedef TYPE_1__ fhandle_t ;
typedef int fh ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mount*,int *,int ,struct vnode**) ;
 int FUNC_1 (struct vnode*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_4 (struct thread*,struct vnode*,int,char const*,int) ;
 int FUNC_5 (struct thread*,int ) ;
 struct mount* FUNC_6 (int *) ;
 int FUNC_7 (struct mount*) ;

__attribute__((used)) static int
FUNC_8(struct thread *VAR_4, int VAR_5, const char *VAR_6,
    enum uio_seg VAR_7, fhandle_t *VAR_8)
{
 fhandle_t VAR_9;
 struct mount *VAR_10;
 struct vnode *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_5(VAR_4, VAR_3);
 if (VAR_12 != 0)
  return (VAR_12);
 VAR_12 = FUNC_3(VAR_8, &VAR_9, sizeof(VAR_9));
 if (VAR_12 != 0)
  return (VAR_12);
 do {
  FUNC_2();
  if ((VAR_10 = FUNC_6(&VAR_9.fh_fsid)) == ((void*)0))
   return (VAR_1);
  VAR_12 = FUNC_0(VAR_10, &VAR_9.fh_fid, VAR_2, &VAR_11);
  FUNC_7(VAR_10);
  if (VAR_12 != 0)
   return (VAR_12);
  FUNC_1(VAR_11, 0);
 } while ((VAR_12 = FUNC_4(VAR_4, VAR_11, VAR_5, VAR_6, VAR_7)) == VAR_0);
 return (VAR_12);
}
