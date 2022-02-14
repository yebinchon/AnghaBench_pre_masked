
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int iflags; } ;
typedef int SCR ;
typedef TYPE_1__ EXCMD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;

int
FUNC_4(SCR *VAR_3, EXCMD *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4->iflags, VAR_0);


 if (FUNC_3(VAR_3, VAR_5) || FUNC_2(VAR_3, VAR_5))
  return (1);

 FUNC_1(VAR_3, VAR_5 ? VAR_2 : VAR_1);
 return (0);
}
