
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,...) ;
 char* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_7(const char* VAR_3)
{
 int VAR_4 = 1;
 char VAR_5[10240];
 char* VAR_6;
 FILE* VAR_7 = FUNC_3(VAR_3, "r");
 if(!VAR_7) {

  if(VAR_1 != VAR_0) {
   if(VAR_2) FUNC_4("%s: %s\n", VAR_3, FUNC_5(VAR_1));
   if(VAR_2) FUNC_4("error: cannot access the file\n");
   FUNC_0(0);
  }
  if(VAR_2) FUNC_4("%s does not exist\n", VAR_3);
  return 0;
 }
 while(FUNC_2(VAR_5, (int)sizeof(VAR_5), VAR_7)) {
  VAR_5[sizeof(VAR_5)-1] = 0;
  if(FUNC_6(VAR_5, ";;REVOKED", 9) == 0) {
   FUNC_1(VAR_7);
   if(VAR_2) FUNC_4("%s : the trust point is revoked\n"
    "and the zone is considered unsigned.\n"
    "if you wish to re-enable, delete the file\n",
    VAR_3);
   return 1;
  }
  VAR_6=VAR_5;
  while(*VAR_6 == ' ' || *VAR_6 == '\t')
   VAR_6++;
  if(VAR_6[0]==0 || VAR_6[0]=='\n' || VAR_6[0]==';') continue;

  VAR_4 = 0;
 }
 FUNC_1(VAR_7);
 if(VAR_4) {
  if(VAR_2) FUNC_4("%s is empty\n", VAR_3);
  return 0;
 }
 if(VAR_2) FUNC_4("%s has content\n", VAR_3);
 return 2;
}
