
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int SSL ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,size_t*) ;
 int FUNC_6 (char*,...) ;
 char* FUNC_7 (int *,size_t) ;
 scalar_t__ FUNC_8 (int *,char*,int) ;
 scalar_t__ FUNC_9 (char*) ;
 int VAR_0 ;

__attribute__((used)) static BIO*
FUNC_10(SSL* VAR_1)
{
 char VAR_2[1024];
 size_t VAR_3;
 char* VAR_4;
 BIO* VAR_5 = FUNC_1(FUNC_2());
 if(VAR_0>=3) FUNC_6("do_chunked_read\n");
 if(!VAR_5) {
  if(VAR_0) FUNC_6("out of memory\n");
  return ((void*)0);
 }
 while(FUNC_8(VAR_1, VAR_2, sizeof(VAR_2))) {

  if(VAR_0>=2) FUNC_6("chunk header: %s\n", VAR_2);
  if(!FUNC_5(VAR_2, &VAR_3)) {
   FUNC_0(VAR_5);
   if(VAR_0>=3) FUNC_6("could not parse chunk header\n");
   return ((void*)0);
  }
  if(VAR_0>=2) FUNC_6("chunk len: %d\n", (int)VAR_3);

  if(VAR_3 == 0) {
   char VAR_6 = 0;


   do {
    if(!FUNC_8(VAR_1, VAR_2, sizeof(VAR_2))) {
     FUNC_0(VAR_5);
     return ((void*)0);
    }
   } while (FUNC_9(VAR_2) > 0);

   if(FUNC_3(VAR_5, &VAR_6, 1) <= 0) {
    if(VAR_0) FUNC_6("out of memory\n");
    FUNC_0(VAR_5);
    return ((void*)0);
   }
   return VAR_5;
  }

  VAR_4 = FUNC_7(VAR_1, VAR_3);
  if(!VAR_4) {
   FUNC_0(VAR_5);
   return ((void*)0);
  }
  if(FUNC_3(VAR_5, VAR_4, (int)VAR_3) <= 0) {
   if(VAR_0) FUNC_6("out of memory\n");
   FUNC_4(VAR_4);
   FUNC_0(VAR_5);
   return ((void*)0);
  }
  FUNC_4(VAR_4);

  if(!FUNC_8(VAR_1, VAR_2, sizeof(VAR_2))) {
   FUNC_0(VAR_5);
   return ((void*)0);
  }
 }
 FUNC_0(VAR_5);
 return ((void*)0);
}
