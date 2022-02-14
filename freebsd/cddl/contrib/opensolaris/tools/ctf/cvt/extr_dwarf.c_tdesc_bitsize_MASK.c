
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int t_type; size_t t_size; int t_id; struct TYPE_5__* t_tdesc; TYPE_1__* t_intr; } ;
typedef TYPE_2__ tdesc_t ;
struct TYPE_4__ {size_t intr_nbits; } ;
 size_t VAR_0 ;






 int FUNC_0 (char*,int ,int) ;

__attribute__((used)) static size_t
FUNC_1(tdesc_t *VAR_1)
{
 for (;;) {
  switch (VAR_1->t_type) {
  case 134:
   return (VAR_1->t_intr->intr_nbits);

  case 139:
  case 135:
  case 131:
  case 129:
  case 137:
  case 133:
   return (VAR_1->t_size * VAR_0);

  case 136:
   return (0);

  case 130:
  case 128:
  case 132:
  case 138:
   VAR_1 = VAR_1->t_tdesc;
   continue;

  case 0:
   return (0);

  default:
   FUNC_0("tdp %u: tdesc_bitsize on unknown type %d\n",
       VAR_1->t_id, VAR_1->t_type);
  }
 }
}
