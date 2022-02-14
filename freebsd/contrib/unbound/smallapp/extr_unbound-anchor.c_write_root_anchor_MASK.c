
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HANDLE ;
typedef int FILE ;
typedef int BIO ;


 int FUNC_0 (int *,char**) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char const*,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,size_t,int,int *) ;
 int FUNC_11 (char*,...) ;
 char* FUNC_12 (scalar_t__) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_13(const char* VAR_2, BIO* VAR_3)
{
 char* VAR_4 = ((void*)0);
 int VAR_5;
 FILE* VAR_6;
 (void)FUNC_1(VAR_3, 0);
 VAR_5 = FUNC_0(VAR_3, &VAR_4);
 if(!VAR_5 || !VAR_4) {
  if(VAR_1) FUNC_11("out of memory\n");
  return;
 }
 VAR_6 = FUNC_8(VAR_2, "w");
 if(!VAR_6) {
  if(VAR_1) FUNC_11("%s: %s\n", VAR_2, FUNC_12(VAR_0));
  return;
 }
 if(FUNC_10(VAR_4, (size_t)VAR_5, 1, VAR_6) != 1) {
  if(VAR_1) FUNC_11("failed to write all data to %s\n",
   VAR_2);
  if(VAR_1 && VAR_0 != 0) FUNC_11("%s\n", FUNC_12(VAR_0));
 }
 FUNC_6(VAR_6);



 FUNC_2((HANDLE)FUNC_4(FUNC_3(VAR_6)));

 FUNC_5(VAR_6);
}
