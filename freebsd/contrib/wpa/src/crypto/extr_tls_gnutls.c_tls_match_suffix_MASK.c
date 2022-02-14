
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gnutls_x509_crt_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char*,char*,char**) ;
 int FUNC_4 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_5(gnutls_x509_crt_t VAR_0, const char *VAR_1,
       int VAR_2)
{
 char *VAR_3, *VAR_4, *VAR_5 = ((void*)0);
 int VAR_6 = 0;

 if (!FUNC_1(VAR_1, ';'))
  return FUNC_4(VAR_0, VAR_1, VAR_2);

 VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3)
  return 0;


 while ((VAR_4 = FUNC_3(VAR_3, ";", &VAR_5))) {
  if (FUNC_4(VAR_0, VAR_4, VAR_2)) {
   VAR_6 = 1;
   break;
  }
 }

 FUNC_0(VAR_3);
 return VAR_6;
}
