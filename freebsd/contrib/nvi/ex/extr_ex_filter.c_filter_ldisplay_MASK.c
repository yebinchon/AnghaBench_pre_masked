
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ibp; int ibcw; } ;
typedef int SCR ;
typedef int FILE ;
typedef TYPE_1__ EX_PRIVATE ;
typedef int CHAR_T ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,size_t,int *,size_t) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *,size_t*) ;
 scalar_t__ FUNC_4 (int *,int *,size_t,int ,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,char*) ;

__attribute__((used)) static int
FUNC_8(SCR *VAR_1, FILE *VAR_2)
{
 size_t VAR_3;
 size_t VAR_4;
 CHAR_T *VAR_5;

 EX_PRIVATE *VAR_6;

 for (VAR_6 = FUNC_0(VAR_1); !FUNC_3(VAR_1, VAR_2, &VAR_3) && !FUNC_2(VAR_1);) {
  FUNC_1(VAR_1, VAR_6->ibcw, VAR_6->ibp, VAR_3, VAR_5, VAR_4);
  if (FUNC_4(VAR_1, VAR_5, VAR_4, 0, 0))
   break;
 }
 if (FUNC_6(VAR_2))
  FUNC_7(VAR_1, VAR_0, "filter read");
 (void)FUNC_5(VAR_2);
 return (0);
}
