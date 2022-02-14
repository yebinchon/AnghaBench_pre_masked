
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct udf_mnt {int root_icb; } ;
struct mount {int dummy; } ;
typedef int ino_t ;


 struct udf_mnt* FUNC_0 (struct mount*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mount*,int ,int,struct vnode**) ;

__attribute__((used)) static int
FUNC_3(struct mount *VAR_0, int VAR_1, struct vnode **VAR_2)
{
 struct udf_mnt *VAR_3;
 ino_t VAR_4;

 VAR_3 = FUNC_0(VAR_0);

 VAR_4 = FUNC_1(&VAR_3->root_icb);

 return (FUNC_2(VAR_0, VAR_4, VAR_1, VAR_2));
}
