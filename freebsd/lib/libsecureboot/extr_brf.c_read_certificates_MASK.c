
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int br_x509_certificate ;


 int * FUNC_0 (unsigned char*,size_t,size_t*) ;
 unsigned char* FUNC_1 (char const*,size_t*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (unsigned char*) ;

br_x509_certificate *
FUNC_4(const char *VAR_0, size_t *VAR_1)
{
 br_x509_certificate *VAR_2;
 unsigned char *VAR_3;
 size_t VAR_4;

 *VAR_1 = 0;





 VAR_3 = FUNC_1(VAR_0, &VAR_4);
 if (VAR_3 == ((void*)0)) {
  return (((void*)0));
 }
 VAR_2 = FUNC_0(VAR_3, VAR_4, VAR_1);
 if (VAR_2 == ((void*)0)) {
     FUNC_2("ERROR: no certificate in file '%s'\n", VAR_0);
 }
 FUNC_3(VAR_3);
 return (VAR_2);
}
