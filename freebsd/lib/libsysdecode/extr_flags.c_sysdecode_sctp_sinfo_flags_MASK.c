
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*,...) ;
 int FUNC_1 (int *,int ,int,int*) ;
 int VAR_1 ;
 char* FUNC_2 (int) ;

void
FUNC_3(FILE *VAR_2, int VAR_3)
{
 const char *VAR_4;
 int VAR_5;
 bool VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_1, VAR_3, &VAR_5);
 if (VAR_5 & ~VAR_0) {
  FUNC_0(VAR_2, "%s%#x", VAR_6 ? "|" : "", VAR_5 & ~VAR_0);
  VAR_6 = 1;
  VAR_5 &= ~VAR_0;
 }
 if (VAR_5 != 0) {
  VAR_4 = FUNC_2(VAR_5);
  if (VAR_4 != ((void*)0)) {
   FUNC_0(VAR_2, "%s%s", VAR_6 ? "|" : "", VAR_4);
  } else {
   FUNC_0(VAR_2, "%s%#x", VAR_6 ? "|" : "", VAR_5);
  }
 }
}
