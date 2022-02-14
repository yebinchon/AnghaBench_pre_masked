
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uuid_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int *,char**,scalar_t__*) ;
 int FUNC_5 (TYPE_1__*,int,int ) ;

void
FUNC_6(FICL_VM *VAR_1)
{

 char *VAR_2;
 uint32_t VAR_3;

 uuid_t *VAR_4;





 VAR_4 = (uuid_t *)FUNC_0(VAR_1->pStack);


 FUNC_4(VAR_4, &VAR_2, &VAR_3);
 if (VAR_3 != VAR_0) {
  FUNC_2(VAR_1->pStack, VAR_2);
  FUNC_1(VAR_1->pStack, FUNC_3(VAR_2));
 } else

  FUNC_1(VAR_1->pStack, -1);

 return;
}
