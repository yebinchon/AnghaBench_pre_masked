
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct msdosfsmount {int dummy; } ;
struct mount {int dummy; } ;
struct denode {int dummy; } ;


 struct vnode* FUNC_0 (struct denode*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct msdosfsmount* FUNC_1 (struct mount*) ;
 int FUNC_2 (struct msdosfsmount*,int ,int ,struct denode**) ;
 int FUNC_3 (char*,struct mount*,struct msdosfsmount*) ;

__attribute__((used)) static int
FUNC_4(struct mount *VAR_2, int VAR_3, struct vnode **VAR_4)
{
 struct msdosfsmount *VAR_5 = FUNC_1(VAR_2);
 struct denode *VAR_6;
 int VAR_7;




 VAR_7 = FUNC_2(VAR_5, VAR_0, VAR_1, &VAR_6);
 if (VAR_7)
  return (VAR_7);
 *VAR_4 = FUNC_0(VAR_6);
 return (0);
}
