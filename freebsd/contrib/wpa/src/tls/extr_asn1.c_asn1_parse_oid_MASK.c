
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct asn1_oid {scalar_t__ len; unsigned long* oid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct asn1_oid*,int ,int) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(const u8 *VAR_2, size_t VAR_3, struct asn1_oid *VAR_4)
{
 const u8 *VAR_5, *VAR_6;
 unsigned long VAR_7;
 u8 VAR_8;

 FUNC_0(VAR_4, 0, sizeof(*VAR_4));

 VAR_5 = VAR_2;
 VAR_6 = VAR_2 + VAR_3;

 while (VAR_5 < VAR_6) {
  VAR_7 = 0;

  do {
   if (VAR_5 >= VAR_6)
    return -1;
   VAR_8 = *VAR_5++;
   VAR_7 = (VAR_7 << 7) | (VAR_8 & 0x7f);
  } while (VAR_8 & 0x80);

  if (VAR_4->len >= VAR_0) {
   FUNC_1(VAR_1, "ASN.1: Too long OID value");
   return -1;
  }
  if (VAR_4->len == 0) {





   VAR_4->oid[0] = VAR_7 / 40;
   if (VAR_4->oid[0] > 2)
    VAR_4->oid[0] = 2;
   VAR_4->oid[1] = VAR_7 - VAR_4->oid[0] * 40;
   VAR_4->len = 2;
  } else
   VAR_4->oid[VAR_4->len++] = VAR_7;
 }

 return 0;
}
