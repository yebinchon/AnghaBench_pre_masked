
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (TYPE_1__*,int,int) ;
 int FUNC_10 (TYPE_1__*,char*) ;

void
FUNC_11(FICL_VM *VAR_0)
{

 char *VAR_1, *VAR_2;

 char *VAR_3;
 int VAR_4;




 VAR_4 = FUNC_3(VAR_0->pStack);
 VAR_3 = (char*) FUNC_4(VAR_0->pStack);


 VAR_1 = (char*) FUNC_1(VAR_4+1);
 if (!VAR_1)
  FUNC_10(VAR_0, "Error: out of memory");
 FUNC_8(VAR_1, VAR_3, VAR_4);
 VAR_1[VAR_4] = '\0';

 VAR_2 = FUNC_2(VAR_1);
 FUNC_0(VAR_1);

 if(VAR_2 != ((void*)0)) {
  FUNC_6(VAR_0->pStack, VAR_2);
  FUNC_5(VAR_0->pStack, FUNC_7(VAR_2));
 } else

  FUNC_5(VAR_0->pStack, -1);

 return;
}
