
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct asn1_hdr {int identifier; int class; int constructed; int tag; int length; int const* payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct asn1_hdr*) ;
 int FUNC_1 (struct asn1_hdr*,int ,int) ;
 int FUNC_2 (int ,char*,...) ;

int FUNC_3(const u8 *VAR_2, size_t VAR_3, struct asn1_hdr *VAR_4)
{
 const u8 *VAR_5, *VAR_6;
 u8 VAR_7;

 FUNC_1(VAR_4, 0, sizeof(*VAR_4));
 VAR_5 = VAR_2;
 VAR_6 = VAR_2 + VAR_3;

 if (VAR_5 >= VAR_6) {
  FUNC_2(VAR_0, "ASN.1: No room for Identifier");
  return -1;
 }
 VAR_4->identifier = *VAR_5++;
 VAR_4->class = VAR_4->identifier >> 6;
 VAR_4->constructed = !!(VAR_4->identifier & (1 << 5));

 if ((VAR_4->identifier & 0x1f) == 0x1f) {
  VAR_4->tag = 0;
  do {
   if (VAR_5 >= VAR_6) {
    FUNC_2(VAR_0, "ASN.1: Identifier "
        "underflow");
    return -1;
   }
   VAR_7 = *VAR_5++;
   FUNC_2(VAR_1, "ASN.1: Extended tag data: "
       "0x%02x", VAR_7);
   VAR_4->tag = (VAR_4->tag << 7) | (VAR_7 & 0x7f);
  } while (VAR_7 & 0x80);
 } else
  VAR_4->tag = VAR_4->identifier & 0x1f;

 if (VAR_5 >= VAR_6) {
  FUNC_2(VAR_0, "ASN.1: No room for Length");
  return -1;
 }
 VAR_7 = *VAR_5++;
 if (VAR_7 & 0x80) {
  if (VAR_7 == 0xff) {
   FUNC_2(VAR_0, "ASN.1: Reserved length "
       "value 0xff used");
   return -1;
  }
  VAR_7 &= 0x7f;
  VAR_4->length = 0;
  if (VAR_7 > 4) {
   FUNC_2(VAR_0, "ASN.1: Too long length field");
   return -1;
  }
  while (VAR_7--) {
   if (VAR_5 >= VAR_6) {
    FUNC_2(VAR_0, "ASN.1: Length "
        "underflow");
    return -1;
   }
   VAR_4->length = (VAR_4->length << 8) | *VAR_5++;
  }
 } else {

  VAR_4->length = VAR_7;
 }

 if (VAR_6 < VAR_5 || VAR_4->length > (unsigned int) (VAR_6 - VAR_5)) {
  FUNC_2(VAR_0, "ASN.1: Contents underflow");
  return -1;
 }

 VAR_4->payload = VAR_5;

 return FUNC_0(VAR_4) ? 0 : -1;
}
