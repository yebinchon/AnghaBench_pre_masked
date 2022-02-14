
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct regnode {scalar_t__ ref_cnt; char const* name; } ;
typedef TYPE_1__* regulator_t ;
struct TYPE_3__ {struct regnode* regnode; } ;


 int FUNC_0 (int,char*) ;

const char *
FUNC_1(regulator_t VAR_0)
{
 struct regnode *VAR_1;

 VAR_1 = VAR_0->regnode;
 FUNC_0(VAR_1->ref_cnt > 0,
    ("Attempt to access unreferenced regulator: %s\n", VAR_1->name));
 return (VAR_1->name);
}
