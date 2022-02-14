
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_open_args {int a_td; int a_vp; } ;
struct denode {int de_FileSize; } ;


 struct denode* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct vop_open_args *VAR_0)
{
 struct denode *VAR_1 = FUNC_0(VAR_0->a_vp);
 FUNC_1(VAR_0->a_vp, VAR_1->de_FileSize, VAR_0->a_td);
 return 0;
}
