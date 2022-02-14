
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct regnode {int dummy; } ;
struct as3722_reg_sc {TYPE_1__* def; } ;
struct TYPE_2__ {scalar_t__ id; int nranges; int ranges; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct as3722_reg_sc*,scalar_t__*) ;
 struct as3722_reg_sc* FUNC_1 (struct regnode*) ;
 int FUNC_2 (int ,int ,scalar_t__,int*) ;

__attribute__((used)) static int
FUNC_3(struct regnode *VAR_3, int *VAR_4)
{
 struct as3722_reg_sc *VAR_5;
 uint8_t VAR_6;
 int VAR_7;

 VAR_5 = FUNC_1(VAR_3);
 VAR_7 = FUNC_0(VAR_5, &VAR_6);
 if (VAR_7 != 0)
  return (VAR_7);


 if (VAR_5->def->id == VAR_1 && VAR_6 == VAR_0)
  return (VAR_2);
 VAR_7 = FUNC_2(VAR_5->def->ranges, VAR_5->def->nranges,
     VAR_6, VAR_4);
 return (VAR_7);
}
