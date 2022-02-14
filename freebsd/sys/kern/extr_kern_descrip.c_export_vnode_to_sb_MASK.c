
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct export_fd_buf {scalar_t__ remainder; int * fdp; int flags; int kif; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct export_fd_buf*) ;
 int FUNC_3 (struct vnode*,int,int,int *,int ) ;

__attribute__((used)) static int
FUNC_4(struct vnode *VAR_0, int VAR_1, int VAR_2,
    struct export_fd_buf *VAR_3)
{
 int VAR_4;

 if (VAR_3->remainder == 0)
  return (0);
 if (VAR_3->fdp != ((void*)0))
  FUNC_1(VAR_3->fdp);
 FUNC_3(VAR_0, VAR_1, VAR_2, &VAR_3->kif, VAR_3->flags);
 VAR_4 = FUNC_2(VAR_3);
 if (VAR_3->fdp != ((void*)0))
  FUNC_0(VAR_3->fdp);
 return (VAR_4);
}
