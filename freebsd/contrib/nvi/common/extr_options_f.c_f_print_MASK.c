
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct TYPE_8__ {int * opts; } ;
typedef TYPE_1__ SCR ;
typedef int OPTION ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int,int ,char*,int ) ;
 int FUNC_4 (TYPE_1__*) ;

int
FUNC_5(
 SCR *VAR_3,
 OPTION *VAR_4,
 char *VAR_5,
 u_long *VAR_6)
{
 int VAR_7 = VAR_4 - VAR_3->opts;


 if (VAR_7 == VAR_1) {
  if (*VAR_6)
   FUNC_2(VAR_3, VAR_7);
  else
   FUNC_1(VAR_3, VAR_7);
 } else if (FUNC_3(VAR_3, VAR_7, VAR_0, VAR_5, 0))
  return(1);


 FUNC_4(VAR_3);


 FUNC_0(VAR_3, VAR_2);
 return (0);
}
