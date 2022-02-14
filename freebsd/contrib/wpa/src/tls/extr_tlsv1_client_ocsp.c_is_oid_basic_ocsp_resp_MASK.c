
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn1_oid {int len; int* oid; } ;



__attribute__((used)) static int FUNC_0(struct asn1_oid *VAR_0)
{
 return VAR_0->len == 10 &&
  VAR_0->oid[0] == 1 &&
  VAR_0->oid[1] == 3 &&
  VAR_0->oid[2] == 6 &&
  VAR_0->oid[3] == 1 &&
  VAR_0->oid[4] == 5 &&
  VAR_0->oid[5] == 5 &&
  VAR_0->oid[6] == 7 &&
  VAR_0->oid[7] == 48 &&
  VAR_0->oid[8] == 1 &&
  VAR_0->oid[9] == 1 ;
}
