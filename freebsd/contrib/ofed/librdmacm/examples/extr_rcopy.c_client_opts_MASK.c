
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int,char**,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 char* VAR_4 ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static void FUNC_3(int VAR_5, char **VAR_6)
{
 int VAR_7;

 if (VAR_5 < 3)
  FUNC_1(VAR_6[0]);

 VAR_4 = VAR_6[1];
 VAR_0 = VAR_6[2];
 VAR_1 = FUNC_2(VAR_0, ':');
 if (VAR_1) {
  *VAR_1 = '\0';
  VAR_1++;
 }
 if (!VAR_1)
  VAR_1 = VAR_4;

 while ((VAR_7 = FUNC_0(VAR_5, VAR_6, "p:")) != -1) {
  switch (VAR_7) {
  case 'p':
   VAR_3 = VAR_2;
   break;
  default:
   FUNC_1(VAR_6[0]);
  }
 }

}
