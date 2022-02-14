
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_dn_field_order_cnt {int email; int ou; int o; int st; int l; int c; int cn; } ;
typedef int X509 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int const*,int,char*,char*,struct tls_dn_field_order_cnt*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*,char*,char**) ;
 int FUNC_3 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_4(const X509 *VAR_8, char *VAR_9,
    struct tls_dn_field_order_cnt *VAR_10)
{
 int VAR_11;
 char *VAR_12 = ((void*)0), *VAR_13, *VAR_14;

 if (FUNC_1(VAR_9, "*") == 0)
  return 1;

 VAR_13 = FUNC_2(VAR_9, "=", &VAR_12);
 if (!VAR_13)
  return 0;



 if (FUNC_1(VAR_13, "CN") == 0) {
  VAR_11 = VAR_1;
  VAR_10->cn++;
 } else if(FUNC_1(VAR_13, "C") == 0) {
  VAR_11 = VAR_2;
  VAR_10->c++;
 } else if (FUNC_1(VAR_13, "L") == 0) {
  VAR_11 = VAR_3;
  VAR_10->l++;
 } else if (FUNC_1(VAR_13, "ST") == 0) {
  VAR_11 = VAR_7;
  VAR_10->st++;
 } else if (FUNC_1(VAR_13, "O") == 0) {
  VAR_11 = VAR_4;
  VAR_10->o++;
 } else if (FUNC_1(VAR_13, "OU") == 0) {
  VAR_11 = VAR_5;
  VAR_10->ou++;
 } else if (FUNC_1(VAR_13, "emailAddress") == 0) {
  VAR_11 = VAR_6;
  VAR_10->email++;
 } else {
  FUNC_3(VAR_0,
   "TLS: Unknown field '%s' in check_cert_subject", VAR_13);
  return 0;
 }

 VAR_14 = FUNC_2(VAR_9, "=", &VAR_12);
 if (!VAR_14) {
  FUNC_3(VAR_0,
      "TLS: Distinguished Name field '%s' value is not defined in check_cert_subject",
      VAR_13);
  return 0;
 }

 return FUNC_0(VAR_8, VAR_11, VAR_13, VAR_14, VAR_10);
}
