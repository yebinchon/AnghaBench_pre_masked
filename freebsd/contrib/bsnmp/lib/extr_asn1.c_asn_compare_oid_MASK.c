
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_long ;
struct asn_oid {size_t len; scalar_t__* subs; } ;



int
FUNC_0(const struct asn_oid *VAR_0, const struct asn_oid *VAR_1)
{
 u_long VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->len && VAR_2 < VAR_1->len; VAR_2++) {
  if (VAR_0->subs[VAR_2] < VAR_1->subs[VAR_2])
   return (-1);
  if (VAR_0->subs[VAR_2] > VAR_1->subs[VAR_2])
   return (+1);
 }
 if (VAR_0->len < VAR_1->len)
  return (-1);
 if (VAR_0->len > VAR_1->len)
  return (+1);
 return (0);
}
