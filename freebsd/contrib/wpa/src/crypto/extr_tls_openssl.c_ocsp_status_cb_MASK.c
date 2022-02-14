
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ocsp_stapling_response; } ;
typedef int SSL ;


 int VAR_0 ;
 char* FUNC_0 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,size_t) ;
 char* FUNC_4 (int *,size_t*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(SSL *VAR_4, void *VAR_5)
{
 char *VAR_6;
 char *VAR_7;
 size_t VAR_8;

 if (VAR_3->ocsp_stapling_response == ((void*)0)) {
  FUNC_5(VAR_0, "OpenSSL: OCSP status callback - no response configured");
  return VAR_2;
 }

 VAR_7 = FUNC_4(VAR_3->ocsp_stapling_response, &VAR_8);
 if (VAR_7 == ((void*)0)) {
  FUNC_5(VAR_0, "OpenSSL: OCSP status callback - could not read response file");


  return VAR_2;
 }
 FUNC_5(VAR_0, "OpenSSL: OCSP status callback - send cached response");
 VAR_6 = FUNC_0(VAR_8);
 if (VAR_6 == ((void*)0)) {
  FUNC_2(VAR_7);
  return VAR_1;
 }

 FUNC_3(VAR_6, VAR_7, VAR_8);
 FUNC_2(VAR_7);
 FUNC_1(VAR_4, VAR_6, VAR_8);

 return VAR_2;
}
