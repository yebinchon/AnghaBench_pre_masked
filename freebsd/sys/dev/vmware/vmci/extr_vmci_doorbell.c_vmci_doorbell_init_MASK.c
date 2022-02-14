
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_2__ {int lock; int * entries; } ;


 size_t FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;

int
FUNC_3(void)
{
 uint32_t VAR_1;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0.entries);
     ++VAR_1)
  FUNC_2(&VAR_0.entries[VAR_1]);

 return (FUNC_1(&VAR_0.lock,
     "VMCI Doorbell index table lock"));
}
