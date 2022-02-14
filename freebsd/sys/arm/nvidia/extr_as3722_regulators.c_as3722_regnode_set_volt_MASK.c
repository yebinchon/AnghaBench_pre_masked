
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct regnode {int dummy; } ;
struct as3722_reg_sc {TYPE_1__* def; } ;
struct TYPE_2__ {int nranges; int ranges; } ;


 int FUNC_0 (struct as3722_reg_sc*,int ) ;
 struct as3722_reg_sc* FUNC_1 (struct regnode*) ;
 int FUNC_2 (int ,int ,int,int,int *) ;

__attribute__((used)) static int
FUNC_3(struct regnode *VAR_0, int VAR_1, int VAR_2,
    int *VAR_3)
{
 struct as3722_reg_sc *VAR_4;
 uint8_t VAR_5;
 int VAR_6;

 VAR_4 = FUNC_1(VAR_0);

 *VAR_3 = 0;
 VAR_6 = FUNC_2(VAR_4->def->ranges, VAR_4->def->nranges,
     VAR_1, VAR_2, &VAR_5);
 if (VAR_6 != 0)
  return (VAR_6);
 VAR_6 = FUNC_0(VAR_4, VAR_5);
 return (VAR_6);

}
