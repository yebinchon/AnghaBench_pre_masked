
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ argc; } ;
typedef int SCR ;
typedef TYPE_1__ EXCMD ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,int ,char*) ;
 scalar_t__ FUNC_3 (int *) ;

int
FUNC_4(SCR *VAR_2, EXCMD *VAR_3)
{

 if (!FUNC_0(VAR_2, VAR_1)) {
  FUNC_2(VAR_2, VAR_0,
      "150|The script command is only available in vi mode");
  return (1);
 }


 if (VAR_3->argc != 0 && FUNC_1(VAR_2, VAR_3))
  return (1);


 if (FUNC_3(VAR_2))
  return (1);

 return (0);
}
