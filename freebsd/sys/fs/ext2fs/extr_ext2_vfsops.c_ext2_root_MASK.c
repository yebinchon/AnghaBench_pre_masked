
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct mount {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mount*,int ,int ,struct vnode**) ;

__attribute__((used)) static int
FUNC_1(struct mount *VAR_2, int VAR_3, struct vnode **VAR_4)
{
 struct vnode *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_0, VAR_1, &VAR_5);
 if (VAR_6)
  return (VAR_6);
 *VAR_4 = VAR_5;
 return (0);
}
