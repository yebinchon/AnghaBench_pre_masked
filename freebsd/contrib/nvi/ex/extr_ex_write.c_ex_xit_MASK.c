
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int iflags; } ;
struct TYPE_12__ {int ep; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ EXCMD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;

int
FUNC_7(SCR *VAR_5, EXCMD *VAR_6)
{
 int VAR_7;

 FUNC_3(VAR_5, VAR_6);

 if (FUNC_1(VAR_5->ep, VAR_1) && FUNC_5(VAR_5, VAR_6, VAR_4))
  return (1);
 if (FUNC_6(VAR_5, 0))
  return (1);

 VAR_7 = FUNC_0(VAR_6->iflags, VAR_0);

 if (FUNC_4(VAR_5, VAR_7))
  return (1);

 FUNC_2(VAR_5, VAR_7 ? VAR_3 : VAR_2);
 return (0);
}
