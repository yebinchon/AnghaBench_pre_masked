
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct asn_oid {size_t len; scalar_t__* subs; } ;



int
FUNC_0(const struct asn_oid *VAR_0, u_int VAR_1,
    const struct asn_oid *VAR_2, u_int VAR_3)
{
 u_int VAR_4;

 for (VAR_4 = VAR_3; VAR_4 < VAR_2->len && VAR_4 < VAR_0->len - VAR_1; VAR_4++) {
  if (VAR_0->subs[VAR_1 + VAR_4] < VAR_2->subs[VAR_4])
   return (-1);
  if (VAR_0->subs[VAR_1 + VAR_4] > VAR_2->subs[VAR_4])
   return (+1);
 }
 if (VAR_0->len - VAR_1 < VAR_2->len)
  return (-1);
 if (VAR_0->len - VAR_1 > VAR_2->len)
  return (+1);

 return (0);
}
