
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int wqe_size; } ;
struct TYPE_6__ {int os; TYPE_1__ config; int port_type; } ;
typedef TYPE_2__ sli4_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (int *,char*,TYPE_2__*) ;
 int FUNC_1 (int ,char*,...) ;

int32_t
FUNC_2(sli4_t *VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4 = 0;

 if (!VAR_2) {
  FUNC_0(((void*)0), "bad parameter sli4=%p\n", VAR_2);
  return -1;
 }

 switch (VAR_3) {
 case 131:
  VAR_4 = sizeof(uint32_t);
  break;
 case 132:
  VAR_4 = 16;
  break;
 case 130:
  VAR_4 = 256;
  break;
 case 128:
  if (VAR_1 == VAR_2->port_type) {
   VAR_4 = VAR_2->config.wqe_size;
  } else {

   FUNC_1(VAR_2->os, "unsupported queue entry size\n");
   return -1;
  }
  break;
 case 129:
  VAR_4 = VAR_0;
  break;
 default:
  FUNC_1(VAR_2->os, "unknown queue type %d\n", VAR_3);
  return -1;
 }
 return VAR_4;
}
