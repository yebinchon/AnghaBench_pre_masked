
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int t_type; size_t t_size; int t_id; struct TYPE_3__* t_tdesc; } ;
typedef TYPE_1__ tdesc_t ;
 int FUNC_0 (char*,int ,int) ;

__attribute__((used)) static size_t
FUNC_1(tdesc_t *VAR_0)
{
 for (;;) {
  switch (VAR_0->t_type) {
  case 134:
  case 133:
  case 139:
  case 135:
  case 131:
  case 129:
  case 137:
   return (VAR_0->t_size);

  case 136:
   return (0);

  case 130:
  case 128:
  case 138:
  case 132:
   VAR_0 = VAR_0->t_tdesc;
   continue;

  case 0:
   return (0);

  default:
   FUNC_0("tdp %u: tdesc_size on unknown type %d\n",
       VAR_0->t_id, VAR_0->t_type);
  }
 }
}
