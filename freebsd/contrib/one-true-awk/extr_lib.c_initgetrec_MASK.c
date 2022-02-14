
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_5(void)
{
 int VAR_5;
 char *VAR_6;

 for (VAR_5 = 1; VAR_5 < *VAR_0; VAR_5++) {
  VAR_6 = FUNC_0(VAR_5);
  if (VAR_6 == ((void*)0) || *VAR_6 == '\0') {
   VAR_1++;
   continue;
  }
  if (!FUNC_1(VAR_6)) {
   FUNC_4(FUNC_2("FILENAME", VAR_4), VAR_6);
   return;
  }
  FUNC_3(VAR_6);
  VAR_1++;
 }
 VAR_2 = VAR_3;
}
