
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int os_dnodesize; } ;
typedef TYPE_1__ objset_t ;


 int VAR_0 ;
__attribute__((used)) static void
FUNC_0(void *VAR_1, uint64_t VAR_2)
{
 objset_t *VAR_3 = VAR_1;

 switch (VAR_2) {
 case 128:
  VAR_3->os_dnodesize = VAR_0;
  break;
 case 129:






  VAR_3->os_dnodesize = VAR_0 * 2;
  break;
 case 133:
 case 132:
 case 131:
 case 130:
 case 134:
  VAR_3->os_dnodesize = VAR_2;
  break;
 }
}
