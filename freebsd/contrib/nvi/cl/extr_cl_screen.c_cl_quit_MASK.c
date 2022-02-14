
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int orig; } ;
typedef int GS ;
typedef TYPE_1__ CL_PRIVATE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int,int *) ;

int
FUNC_7(GS *VAR_6)
{
 CL_PRIVATE *VAR_7;
 int VAR_8;

 VAR_8 = 0;
 VAR_7 = FUNC_2(VAR_6);





 if (!FUNC_1(VAR_7, VAR_0 | VAR_1))
  return (0);


 if (FUNC_4(VAR_6))
  VAR_8 = 1;


 if (FUNC_1(VAR_7, VAR_2) &&
     FUNC_1(VAR_7, VAR_1) && FUNC_5(VAR_6))
  VAR_8 = 1;


 if (FUNC_1(VAR_7, VAR_2) &&
     FUNC_1(VAR_7, VAR_0) && FUNC_3(VAR_6))
  VAR_8 = 1;
 (void)FUNC_6(VAR_3, VAR_4 | VAR_5, &VAR_7->orig);

 FUNC_0(VAR_7, VAR_0 | VAR_1);
 return (VAR_8);
}
