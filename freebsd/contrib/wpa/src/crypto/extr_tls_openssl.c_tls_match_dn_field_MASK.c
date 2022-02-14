
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_dn_field_order_cnt {int dummy; } ;
typedef int field ;
typedef int dn_cnt ;
typedef int X509 ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*,char*,char const**) ;
 int FUNC_1 (int *,char*,struct tls_dn_field_order_cnt*) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (struct tls_dn_field_order_cnt*,int ,int) ;
 int FUNC_4 (int ,char*,char const*) ;

__attribute__((used)) static int FUNC_5(X509 *VAR_2, const char *VAR_3)
{
 const char *VAR_4, *VAR_5 = ((void*)0);
 char VAR_6[256];
 struct tls_dn_field_order_cnt VAR_7;

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));




 while ((VAR_4 = FUNC_0(VAR_3, "/", &VAR_5))) {
  if (VAR_5 - VAR_4 >= (int) sizeof(VAR_6)) {
   FUNC_4(VAR_1,
       "OpenSSL: Too long DN matching field value in '%s'",
       VAR_3);
   return 0;
  }
  FUNC_2(VAR_6, VAR_4, VAR_5 - VAR_4);
  VAR_6[VAR_5 - VAR_4] = '\0';

  if (!FUNC_1(VAR_2, VAR_6, &VAR_7)) {
   FUNC_4(VAR_0, "OpenSSL: No match for DN '%s'",
       VAR_6);
   return 0;
  }
 }

 return 1;
}
