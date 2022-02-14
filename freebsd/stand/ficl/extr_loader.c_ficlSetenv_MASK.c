
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,char*) ;

void
FUNC_8(FICL_VM *VAR_0)
{

 char *VAR_1, *VAR_2;

 char *VAR_3, *VAR_4;
 int VAR_5, VAR_6;




 VAR_5 = FUNC_3(VAR_0->pStack);
 VAR_3 = (char*) FUNC_4(VAR_0->pStack);
 VAR_6 = FUNC_3(VAR_0->pStack);
 VAR_4 = (char*) FUNC_4(VAR_0->pStack);


 VAR_1 = (char*) FUNC_1(VAR_5+1);
 if (!VAR_1)
  FUNC_7(VAR_0, "Error: out of memory");
 FUNC_5(VAR_1, VAR_3, VAR_5);
 VAR_1[VAR_5] = '\0';
 VAR_2 = (char*) FUNC_1(VAR_6+1);
 if (!VAR_2)
  FUNC_7(VAR_0, "Error: out of memory");
 FUNC_5(VAR_2, VAR_4, VAR_6);
 VAR_2[VAR_6] = '\0';

 FUNC_2(VAR_1, VAR_2, 1);
 FUNC_0(VAR_1);
 FUNC_0(VAR_2);


 return;
}
