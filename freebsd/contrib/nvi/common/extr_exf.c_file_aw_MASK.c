
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ep; } ;
typedef TYPE_1__ SCR ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int *,int *,int *,int) ;
 int FUNC_3 (TYPE_1__*,int ,char*) ;

int
FUNC_4(
 SCR *VAR_4,
 int VAR_5)
{
 if (!FUNC_0(VAR_4->ep, VAR_0))
  return (0);
 if (!FUNC_1(VAR_4, VAR_2))
  return (0);
 if (FUNC_1(VAR_4, VAR_3)) {
  FUNC_3(VAR_4, VAR_1,
      "266|File readonly, modifications not auto-written");
  return (1);
 }
 return (FUNC_2(VAR_4, ((void*)0), ((void*)0), ((void*)0), VAR_5));
}
