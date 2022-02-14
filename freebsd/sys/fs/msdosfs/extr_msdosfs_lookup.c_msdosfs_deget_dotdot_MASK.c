
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct msdosfsmount {int dummy; } ;
struct mount {int dummy; } ;
struct denode {int dummy; } ;
struct deget_dotdot {int blkoff; int cluster; } ;


 struct vnode* FUNC_0 (struct denode*) ;
 struct msdosfsmount* FUNC_1 (struct mount*) ;
 int FUNC_2 (struct msdosfsmount*,int ,int ,struct denode**) ;

__attribute__((used)) static int
FUNC_3(struct mount *VAR_0, void *VAR_1, int VAR_2,
    struct vnode **VAR_3)
{
 struct deget_dotdot *VAR_4;
 struct denode *VAR_5;
 struct msdosfsmount *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_0);
 VAR_4 = VAR_1;
 VAR_7 = FUNC_2(VAR_6, VAR_4->cluster, VAR_4->blkoff, &VAR_5);
 if (VAR_7 == 0)
  *VAR_3 = FUNC_0(VAR_5);
 return (VAR_7);
}
