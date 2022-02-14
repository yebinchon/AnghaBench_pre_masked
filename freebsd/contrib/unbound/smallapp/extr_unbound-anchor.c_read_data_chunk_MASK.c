
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*,...) ;
 int VAR_1 ;

__attribute__((used)) static char*
FUNC_5(SSL* VAR_2, size_t VAR_3)
{
 size_t VAR_4 = 0;
 int VAR_5;
 char* VAR_6;
 if(VAR_3 >= 0xfffffff0)
  return ((void*)0);
 VAR_6 = FUNC_3(VAR_3+1);
 if(!VAR_6) {
  if(VAR_1) FUNC_4("out of memory\n");
  return ((void*)0);
 }
 while(VAR_4 < VAR_3) {
  if((VAR_5 = FUNC_1(VAR_2, VAR_6+VAR_4, (int)(VAR_3-VAR_4))) <= 0) {
   if(FUNC_0(VAR_2, VAR_5) == VAR_0) {

    if(VAR_1) FUNC_4("could not SSL_read: unexpected EOF\n");
    FUNC_2(VAR_6);
    return ((void*)0);
   }
   if(VAR_1) FUNC_4("could not SSL_read\n");
   FUNC_2(VAR_6);
   return ((void*)0);
  }
  if(VAR_1 >= 2) FUNC_4("at %d/%d\n", (int)VAR_4, (int)VAR_3);
  VAR_4 += VAR_5;
 }
 if(VAR_1>=2) FUNC_4("read %d data\n", (int)VAR_3);
 VAR_6[VAR_3] = 0;
 return VAR_6;
}
