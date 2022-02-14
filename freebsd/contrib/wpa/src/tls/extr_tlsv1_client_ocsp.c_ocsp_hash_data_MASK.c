
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct asn1_oid {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct asn1_oid*,char*,int) ;
 scalar_t__ FUNC_1 (int,int const**,size_t*,int *) ;
 scalar_t__ FUNC_2 (int,int const**,size_t*,int *) ;
 scalar_t__ FUNC_3 (int,int const**,size_t*,int *) ;
 scalar_t__ FUNC_4 (int,int const**,size_t*,int *) ;
 int FUNC_5 (int ,char*,int *,int) ;
 int FUNC_6 (int ,char*,char*) ;
 scalar_t__ FUNC_7 (struct asn1_oid*) ;
 scalar_t__ FUNC_8 (struct asn1_oid*) ;
 scalar_t__ FUNC_9 (struct asn1_oid*) ;
 scalar_t__ FUNC_10 (struct asn1_oid*) ;

__attribute__((used)) static unsigned int FUNC_11(struct asn1_oid *VAR_2, const u8 *VAR_3,
       size_t VAR_4, u8 *VAR_5)
{
 const u8 *VAR_6[1] = { VAR_3 };
 size_t VAR_7[1] = { VAR_4 };
 char VAR_8[100];

 if (FUNC_7(VAR_2)) {
  if (FUNC_1(1, VAR_6, VAR_7, VAR_5) < 0)
   return 0;
  FUNC_5(VAR_1, "OCSP: Hash (SHA1)", VAR_5, 20);
  return 20;
 }

 if (FUNC_8(VAR_2)) {
  if (FUNC_2(1, VAR_6, VAR_7, VAR_5) < 0)
   return 0;
  FUNC_5(VAR_1, "OCSP: Hash (SHA256)", VAR_5, 32);
  return 32;
 }

 if (FUNC_9(VAR_2)) {
  if (FUNC_3(1, VAR_6, VAR_7, VAR_5) < 0)
   return 0;
  FUNC_5(VAR_1, "OCSP: Hash (SHA384)", VAR_5, 48);
  return 48;
 }

 if (FUNC_10(VAR_2)) {
  if (FUNC_4(1, VAR_6, VAR_7, VAR_5) < 0)
   return 0;
  FUNC_5(VAR_1, "OCSP: Hash (SHA512)", VAR_5, 64);
  return 64;
 }


 FUNC_0(VAR_2, VAR_8, sizeof(VAR_8));
 FUNC_6(VAR_0, "OCSP: Could not calculate hash with alg %s",
     VAR_8);
 return 0;
}
