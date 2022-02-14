
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int heim_sipc_call ;
typedef int (* heim_ipc_complete ) (int ,int ,TYPE_1__*) ;
struct TYPE_6__ {int length; int data; } ;
typedef TYPE_1__ heim_idata ;
typedef int heim_icred ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, const heim_idata *VAR_1,
      const heim_icred VAR_2,
      heim_ipc_complete VAR_3,
      heim_sipc_call VAR_4)
{
    heim_idata VAR_5;
    FUNC_0("got request\n");
    VAR_5.length = 3;
    VAR_5.data = FUNC_1("hej");
    (*VAR_3)(VAR_4, 0, &VAR_5);
}
