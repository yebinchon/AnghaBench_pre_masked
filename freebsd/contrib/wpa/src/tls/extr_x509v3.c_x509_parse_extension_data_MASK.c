
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct x509_certificate {int dummy; } ;
struct asn1_oid {int* oid; } ;


 int FUNC_0 (struct asn1_oid*) ;
 int FUNC_1 (struct x509_certificate*,int const*,size_t) ;
 int FUNC_2 (struct x509_certificate*,int const*,size_t) ;
 int FUNC_3 (struct x509_certificate*,int const*,size_t) ;
 int FUNC_4 (struct x509_certificate*,int const*,size_t) ;
 int FUNC_5 (struct x509_certificate*,int const*,size_t) ;

__attribute__((used)) static int FUNC_6(struct x509_certificate *VAR_0,
         struct asn1_oid *VAR_1,
         const u8 *VAR_2, size_t VAR_3)
{
 if (!FUNC_0(VAR_1))
  return 1;







 switch (VAR_1->oid[3]) {
 case 15:
  return FUNC_4(VAR_0, VAR_2, VAR_3);
 case 17:
  return FUNC_5(VAR_0, VAR_2, VAR_3);
 case 18:
  return FUNC_3(VAR_0, VAR_2, VAR_3);
 case 19:
  return FUNC_1(VAR_0, VAR_2, VAR_3);
 case 37:
  return FUNC_2(VAR_0, VAR_2, VAR_3);
 default:
  return 1;
 }
}
