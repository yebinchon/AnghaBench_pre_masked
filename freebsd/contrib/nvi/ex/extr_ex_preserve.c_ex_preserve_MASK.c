
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int recno_t ;
struct TYPE_8__ {int ep; } ;
typedef TYPE_1__ SCR ;
typedef int EXCMD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int ,char*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;

int
FUNC_6(SCR *VAR_5, EXCMD *VAR_6)
{
 recno_t VAR_7;

 FUNC_1(VAR_5, VAR_6);

 if (!FUNC_0(VAR_5->ep, VAR_1)) {
  FUNC_3(VAR_5, VAR_2, "142|Preservation of this file not possible");
  return (1);
 }


 if (FUNC_0(VAR_5->ep, VAR_0) && FUNC_4(VAR_5))
  return (1);


 if (FUNC_2(VAR_5, &VAR_7))
  return (1);


 if (FUNC_5(VAR_5, VAR_4))
  return (1);

 FUNC_3(VAR_5, VAR_3, "143|File preserved");
 return (0);
}
