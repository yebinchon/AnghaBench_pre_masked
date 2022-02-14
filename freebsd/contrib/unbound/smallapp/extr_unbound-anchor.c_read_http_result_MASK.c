
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;
typedef int BIO ;


 int * FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int *,size_t*) ;
 char* FUNC_8 (int *,size_t) ;
 int FUNC_9 (int *,size_t*) ;
 int VAR_0 ;

__attribute__((used)) static BIO*
FUNC_10(SSL* VAR_1)
{
 size_t VAR_2 = 0;
 char* VAR_3;
 BIO* VAR_4;
 if(!FUNC_9(VAR_1, &VAR_2)) {
  return ((void*)0);
 }
 if(VAR_2 == 0) {
  VAR_3 = FUNC_7(VAR_1, &VAR_2);
 } else {
  VAR_3 = FUNC_8(VAR_1, VAR_2);
 }
 if(!VAR_3) return ((void*)0);
 if(VAR_0 >= 4) FUNC_5("read data", VAR_3, (int)VAR_2);
 VAR_4 = FUNC_0(FUNC_1());
 if(!VAR_4) {
  if(VAR_0) FUNC_6("out of memory\n");
  FUNC_4(VAR_3);
  FUNC_3(0);
 }
 FUNC_2(VAR_4, VAR_3, (int)VAR_2);
 FUNC_4(VAR_3);
 return VAR_4;
}
