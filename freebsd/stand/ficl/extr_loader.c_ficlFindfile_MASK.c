
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct preloaded_file {int dummy; } ;
struct TYPE_5__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;


 scalar_t__ FUNC_0 (int) ;
 struct preloaded_file* FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,struct preloaded_file*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (TYPE_1__*,char*) ;

void
FUNC_8(FICL_VM *VAR_0)
{

 char *VAR_1, *VAR_2;

 char *VAR_3, *VAR_4;
 struct preloaded_file* VAR_5;
 int VAR_6, VAR_7;





 VAR_7 = FUNC_2(VAR_0->pStack);
 VAR_4 = (char*) FUNC_3(VAR_0->pStack);
 VAR_6 = FUNC_2(VAR_0->pStack);
 VAR_3 = (char*) FUNC_3(VAR_0->pStack);

 VAR_1 = (char*) FUNC_0(VAR_6+1);
 if (!VAR_1)
  FUNC_7(VAR_0, "Error: out of memory");
 FUNC_5(VAR_1, VAR_3, VAR_6);
 VAR_1[VAR_6] = '\0';
 VAR_2 = (char*) FUNC_0(VAR_7+1);
 if (!VAR_2)
  FUNC_7(VAR_0, "Error: out of memory");
 FUNC_5(VAR_2, VAR_4, VAR_7);
 VAR_2[VAR_7] = '\0';

 VAR_5 = FUNC_1(VAR_1, VAR_2);



 FUNC_4(VAR_0->pStack, VAR_5);

 return;
}
