
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct mount {int dummy; } ;
struct cd9660_ino_alloc_arg {scalar_t__ i_ino; scalar_t__ ino; int ep; } ;


 int FUNC_0 (struct mount*,scalar_t__,int,struct vnode**,int,int ) ;

__attribute__((used)) static int
FUNC_1(struct mount *VAR_0, void *VAR_1, int VAR_2,
    struct vnode **VAR_3)
{
 struct cd9660_ino_alloc_arg *VAR_4;

 VAR_4 = VAR_1;
 return (FUNC_0(VAR_0, VAR_4->i_ino, VAR_2, VAR_3,
     VAR_4->i_ino != VAR_4->ino, VAR_4->ep));
}
