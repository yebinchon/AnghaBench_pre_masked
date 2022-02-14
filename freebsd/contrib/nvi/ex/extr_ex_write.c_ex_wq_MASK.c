
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int iflags; } ;
typedef int SCR ;
typedef TYPE_1__ EXCMD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;

int
FUNC_5(SCR *VAR_4, EXCMD *VAR_5)
{
 int VAR_6;

 if (FUNC_3(VAR_4, VAR_5, VAR_3))
  return (1);
 if (FUNC_4(VAR_4, 0))
  return (1);

 VAR_6 = FUNC_0(VAR_5->iflags, VAR_0);

 if (FUNC_2(VAR_4, VAR_6))
  return (1);

 FUNC_1(VAR_4, VAR_6 ? VAR_2 : VAR_1);
 return (0);
}
