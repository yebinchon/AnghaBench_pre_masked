
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,char*) ;

void
FUNC_8(FICL_VM *VAR_0)
{

 char *VAR_1;

 char *VAR_2;
 int VAR_3;




 VAR_3 = FUNC_2(VAR_0->pStack);
 VAR_2 = (char*) FUNC_3(VAR_0->pStack);


 VAR_1 = (char*) FUNC_1(VAR_3+1);
 if (!VAR_1)
  FUNC_7(VAR_0, "Error: out of memory");
 FUNC_4(VAR_1, VAR_2, VAR_3);
 VAR_1[VAR_3] = '\0';

 FUNC_5(VAR_1);
 FUNC_0(VAR_1);


 return;
}
