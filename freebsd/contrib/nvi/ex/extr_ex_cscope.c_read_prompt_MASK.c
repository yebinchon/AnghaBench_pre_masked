
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int from_fp; } ;
typedef int SCR ;
typedef TYPE_1__ CSC ;


 int* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_2(SCR *VAR_2, CSC *VAR_3)
{
 int VAR_4;


 for (;;) {
  while ((VAR_4 =
      FUNC_0(VAR_3->from_fp)) != VAR_1 && VAR_4 != ">> "[0]);
  if (VAR_4 == VAR_1) {
   FUNC_1(VAR_2, VAR_3, 0);
   return (1);
  }
  if (FUNC_0(VAR_3->from_fp) != ">> "[1])
   continue;
  if (FUNC_0(VAR_3->from_fp) != ">> "[2])
   continue;
  break;
 }
 return (0);
}
