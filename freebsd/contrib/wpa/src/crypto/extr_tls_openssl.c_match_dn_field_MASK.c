
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_dn_field_order_cnt {int dummy; } ;
typedef int X509_NAME_ENTRY ;
typedef int X509_NAME ;
typedef int X509 ;
typedef int ASN1_STRING ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,int) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (struct tls_dn_field_order_cnt const*,int) ;
 scalar_t__ FUNC_7 (int ,char const*,int) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (int ,char*,char const*,char const*,int ) ;

__attribute__((used)) static int FUNC_10(const X509 *VAR_1, int VAR_2, const char *VAR_3,
     const char *VAR_4,
     const struct tls_dn_field_order_cnt *VAR_5)
{
 int VAR_6, VAR_7 = 0, VAR_8, VAR_9, VAR_10 = 0;
 X509_NAME *VAR_11;

 VAR_8 = FUNC_8(VAR_4);
 VAR_11 = FUNC_5((X509 *) VAR_1);



 VAR_9 = FUNC_6(VAR_5, VAR_2);
 if (VAR_9 < 0)
  return 0;


 for (VAR_6 = -1; (VAR_6 = FUNC_4(VAR_11, VAR_2, VAR_6)) > -1;) {
  X509_NAME_ENTRY *VAR_12;
  ASN1_STRING *VAR_13;

  VAR_12 = FUNC_3(VAR_11, VAR_6);
  if (!VAR_12)
   continue;

  VAR_13 = FUNC_2(VAR_12);
  if (!VAR_13)
   continue;

  VAR_10++;


  if (VAR_10 != VAR_9)
   continue;





  if (VAR_8 > 0 && VAR_4[VAR_8 - 1] == '*') {



   VAR_7 = FUNC_1(VAR_13) >= VAR_8 - 1 &&
    FUNC_7(FUNC_0(VAR_13), VAR_4,
       VAR_8 - 1) == 0;
  } else {


   VAR_7 = FUNC_1(VAR_13) == VAR_8 &&
    FUNC_7(FUNC_0(VAR_13), VAR_4,
       VAR_8) == 0;
  }
  if (!VAR_7) {
   FUNC_9(VAR_0,
       "OpenSSL: Failed to match %s '%s' with certificate DN field value '%s'",
       VAR_3, VAR_4, FUNC_0(VAR_13));
  }
  break;
 }

 return VAR_7;
}
