
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn1_oid {int len; int* oid; } ;



__attribute__((used)) static int FUNC_0(struct asn1_oid *VAR_0)
{

 return VAR_0->len >= 4 &&
  VAR_0->oid[0] == 2 &&
  VAR_0->oid[1] == 5 &&
  VAR_0->oid[2] == 29 ;
}
