
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 long FUNC_0 (int *,char**) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,char*,long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_5(BIO* VAR_1, BIO* VAR_2)
{
 char* VAR_3 = ((void*)0);
 long VAR_4, VAR_5;
 (void)FUNC_1(VAR_2, 0);
 VAR_5 = FUNC_0(VAR_2, &VAR_3);
 if(!VAR_5 || !VAR_3) {
  if(VAR_0) FUNC_4("out of memory in BIO_write\n");
  FUNC_3(0);
 }

 for(VAR_4=0; VAR_4<VAR_5; VAR_4++) {
  if(VAR_3[VAR_4] == '\r' || VAR_3[VAR_4] == '\n')
   VAR_3[VAR_4] = ' ';
 }

 if(FUNC_2(VAR_1, VAR_3, VAR_5) < 0) {
  if(VAR_0) FUNC_4("out of memory in BIO_write\n");
  FUNC_3(0);
 }
}
