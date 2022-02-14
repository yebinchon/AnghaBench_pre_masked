
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct mount {int dummy; } ;
struct fdesc_get_ino_args {int td; int fp; int ix; int fd_fd; int ftype; } ;


 int FUNC_0 (int ,int ,int ,struct mount*,struct vnode**) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct mount *VAR_0, void *VAR_1, int VAR_2,
    struct vnode **VAR_3)
{
 struct fdesc_get_ino_args *VAR_4;
 int VAR_5;

 VAR_4 = VAR_1;
 VAR_5 = FUNC_0(VAR_4->ftype, VAR_4->fd_fd, VAR_4->ix, VAR_0, VAR_3);
 FUNC_1(VAR_4->fp, VAR_4->td);
 return (VAR_5);
}
