
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int refcnt; } ;
struct TYPE_5__ {int frp; TYPE_2__* ep; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ EXF ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;

int
FUNC_2(
 SCR *VAR_2,
 int VAR_3)
{
 EXF *VAR_4;

 VAR_4 = VAR_2->ep;


 if (VAR_4 == ((void*)0))
  return (0);
 if (FUNC_0(VAR_2->frp, VAR_0) && VAR_4->refcnt <= 1 && !VAR_3) {
  FUNC_1(VAR_2, VAR_1,
      "265|File is a temporary; exit will discard modifications");
  return (1);
 }
 return (0);
}
