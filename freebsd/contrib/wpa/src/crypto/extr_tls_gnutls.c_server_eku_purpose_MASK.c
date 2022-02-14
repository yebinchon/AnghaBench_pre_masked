
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int oid ;
typedef int gnutls_x509_crt_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,unsigned int,char*,size_t*,int *) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static int FUNC_3(gnutls_x509_crt_t VAR_5)
{
 unsigned int VAR_6;

 for (VAR_6 = 0; ; VAR_6++) {
  char VAR_7[128];
  size_t VAR_8 = sizeof(VAR_7);
  int VAR_9;

  VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_7,
         &VAR_8, ((void*)0));
  if (VAR_9 == VAR_0) {
   if (VAR_6 == 0) {

    return 1;
   }
   break;
  }

  if (VAR_9 < 0) {
   FUNC_2(VAR_4, "GnuTLS: Failed to get EKU");
   return 0;
  }

  FUNC_2(VAR_3, "GnuTLS: Certificate purpose: %s", VAR_7);
  if (FUNC_1(VAR_7, VAR_2) == 0 ||
      FUNC_1(VAR_7, VAR_1) == 0)
   return 1;
 }

 return 0;
}
