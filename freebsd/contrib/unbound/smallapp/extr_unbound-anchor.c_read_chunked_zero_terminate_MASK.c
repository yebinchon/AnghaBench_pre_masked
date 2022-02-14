
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char**) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (char*,char*,size_t) ;
 int FUNC_5 (char*,...) ;
 int VAR_0 ;

__attribute__((used)) static char*
FUNC_6(SSL* VAR_1, size_t* VAR_2)
{

 BIO* VAR_3 = FUNC_2(VAR_1);
 char* VAR_4, *VAR_5 = ((void*)0);
 size_t VAR_6;
 if(!VAR_3) {
  if(VAR_0) FUNC_5("could not read from https\n");
  return ((void*)0);
 }
 VAR_6 = (size_t)FUNC_1(VAR_3, &VAR_5);
 if(VAR_0>=2) FUNC_5("chunked data is %d\n", (int)VAR_6);
 if(VAR_6 == 0 || VAR_5 == ((void*)0)) {
  if(VAR_0) FUNC_5("out of memory\n");
  return ((void*)0);
 }
 *VAR_2 = VAR_6-1;
 VAR_4 = (char*)FUNC_3(VAR_6);
 if(VAR_4 == ((void*)0)) {
  if(VAR_0) FUNC_5("out of memory\n");
  return ((void*)0);
 }
 FUNC_4(VAR_4, VAR_5, VAR_6);
 FUNC_0(VAR_3);
 return VAR_4;
}
