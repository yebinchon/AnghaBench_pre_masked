
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn1_oid {int len; int* oid; } ;



int FUNC_0(struct asn1_oid *VAR_0)
{
 return VAR_0->len == 6 &&
  VAR_0->oid[0] == 1 &&
  VAR_0->oid[1] == 3 &&
  VAR_0->oid[2] == 14 &&
  VAR_0->oid[3] == 3 &&
  VAR_0->oid[4] == 2 &&
  VAR_0->oid[5] == 26 ;
}
