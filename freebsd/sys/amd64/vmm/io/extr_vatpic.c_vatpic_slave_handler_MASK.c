
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vm {int dummy; } ;
struct vatpic {struct atpic* atpic; } ;
struct atpic {int dummy; } ;


 int FUNC_0 (struct vatpic*,struct atpic*,int,int,int,int *) ;
 int FUNC_1 (struct vatpic*,struct atpic*,int,int,int,int *) ;
 struct vatpic* FUNC_2 (struct vm*) ;

int
FUNC_3(struct vm *VAR_0, int VAR_1, bool VAR_2, int VAR_3, int VAR_4,
    uint32_t *VAR_5)
{
 struct vatpic *VAR_6;
 struct atpic *VAR_7;

 VAR_6 = FUNC_2(VAR_0);
 VAR_7 = &VAR_6->atpic[1];

 if (VAR_4 != 1)
  return (-1);

 if (VAR_2) {
  return (FUNC_0(VAR_6, VAR_7, VAR_2, VAR_3, VAR_4, VAR_5));
 }

 return (FUNC_1(VAR_6, VAR_7, VAR_2, VAR_3, VAR_4, VAR_5));
}
