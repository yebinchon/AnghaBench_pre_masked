
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef char uuid_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,char*,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (TYPE_1__*,char*) ;

void
FUNC_9(FICL_VM *VAR_1)
{

 char *VAR_2;
 uint32_t VAR_3;

 char *VAR_4;
 int VAR_5;
 uuid_t *VAR_6;





 VAR_5 = FUNC_2(VAR_1->pStack);
 VAR_4 = (char *) FUNC_3(VAR_1->pStack);


 VAR_2 = (char *)FUNC_1(VAR_5 + 1);
 if (!VAR_2)
  FUNC_8(VAR_1, "Error: out of memory");
 FUNC_5(VAR_2, VAR_4, VAR_5);
 VAR_2[VAR_5] = '\0';

 VAR_6 = (uuid_t *)FUNC_1(sizeof (*VAR_6));

 FUNC_6(VAR_2, VAR_6, &VAR_3);
 FUNC_0(VAR_2);
 if (VAR_3 != VAR_0) {
  FUNC_0(VAR_6);
  VAR_6 = ((void*)0);
 }



 FUNC_4(VAR_1->pStack, VAR_6);


 return;
}
