
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn1_oid {int len; int* oid; } ;


 scalar_t__ FUNC_0 (struct asn1_oid*) ;

__attribute__((used)) static int FUNC_1(struct asn1_oid *VAR_0)
{

 return VAR_0->len == 9 &&
  FUNC_0(VAR_0) &&
  VAR_0->oid[8] == 1 ;
}
