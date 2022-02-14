
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct regnode {scalar_t__ ref_cnt; int name; } ;
typedef TYPE_1__* regulator_t ;
struct TYPE_3__ {struct regnode* regnode; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct regnode*,int*) ;

int
FUNC_4(regulator_t VAR_0, int *VAR_1)
{
 int VAR_2;
 struct regnode *VAR_3;

 VAR_3 = VAR_0->regnode;
 FUNC_0(VAR_3->ref_cnt > 0,
    ("Attempt to access unreferenced regulator: %s\n", VAR_3->name));

 FUNC_1();
 VAR_2 = FUNC_3(VAR_3, VAR_1);
 FUNC_2();
 return (VAR_2);
}
