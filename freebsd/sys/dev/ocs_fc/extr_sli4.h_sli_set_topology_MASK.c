
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int topology; } ;
struct TYPE_5__ {int os; TYPE_1__ config; } ;
typedef TYPE_2__ sli4_t ;
typedef int int32_t ;






 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static inline int32_t
FUNC_1(sli4_t *VAR_0, uint32_t VAR_1)
{
 int32_t VAR_2 = 0;

 switch (VAR_1) {
 case 130:
 case 131:
 case 128:
 case 129:
  VAR_0->config.topology = VAR_1;
  break;
 default:
  FUNC_0(VAR_0->os, "unsupported topology %#x\n", VAR_1);
  VAR_2 = -1;
 }

 return VAR_2;
}
