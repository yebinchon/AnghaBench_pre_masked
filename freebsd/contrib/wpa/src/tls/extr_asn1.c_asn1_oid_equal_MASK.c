
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn1_oid {size_t len; scalar_t__* oid; } ;



int FUNC_0(const struct asn1_oid *VAR_0, const struct asn1_oid *VAR_1)
{
 size_t VAR_2;

 if (VAR_0->len != VAR_1->len)
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->len; VAR_2++) {
  if (VAR_0->oid[VAR_2] != VAR_1->oid[VAR_2])
   return 0;
 }

 return 1;
}
