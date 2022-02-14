
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*,int,char*) ;

__attribute__((used)) static void FUNC_3(int VAR_2, const char *VAR_3)
{
 char *VAR_4, *VAR_5;
 if (VAR_2 == 6 || VAR_2 == 7) {

  return;
 }

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 == ((void*)0))
  return;

 VAR_5 = VAR_4;
 while (*VAR_5 != '\0') {
  if (*VAR_5 == '\n') {
   *VAR_5 = '\0';
   break;
  }
  VAR_5++;
 }
 FUNC_2(VAR_2 > 3 ? VAR_1 : VAR_0,
     "gnutls<%d> %s", VAR_2, VAR_4);
 FUNC_0(VAR_4);
}
