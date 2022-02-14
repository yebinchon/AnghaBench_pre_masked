
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn1_hdr {int length; int* payload; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct asn1_hdr *VAR_1)
{

 if (VAR_1->length != 1) {
  FUNC_0(VAR_0, "ASN.1: Unexpected BOOLEAN length (%u)",
      VAR_1->length);
  return 0;
 }

 if (VAR_1->payload[0] != 0 && VAR_1->payload[0] != 0xff) {
  FUNC_0(VAR_0,
      "ASN.1: Invalid BOOLEAN value 0x%x (DER requires 0 or 0xff)",
      VAR_1->payload[0]);
  return 0;
 }

 return 1;
}
