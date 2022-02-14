
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sport; int dport; int* sip; int* dip; } ;
struct t4_filter_specification {TYPE_1__ mask; scalar_t__ type; } ;



__attribute__((used)) static bool
FUNC_0(struct t4_filter_specification *VAR_0)
{
 int VAR_1;
 const int VAR_2 = VAR_0->type ? 16 : 4;

 if (VAR_0->mask.sport != 0xffff || VAR_0->mask.dport != 0xffff)
  return (0);

 for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++) {
  if (VAR_0->mask.sip[VAR_1] != 0xff)
   return (0);
  if (VAR_0->mask.dip[VAR_1] != 0xff)
   return (0);
 }

 return (1);
}
