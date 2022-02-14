
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int*,char***,char*) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (size_t) ;
 char* FUNC_5 (char*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,size_t) ;
 int FUNC_8 (char*,char const*,size_t) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char*) ;

void
FUNC_11(int VAR_2, char *VAR_3[])
{
 size_t VAR_4;
 const char *VAR_5;
 char *VAR_6, *VAR_7;

 if (VAR_2 == 0 || VAR_2 > 2 ||
     (VAR_2 == 1 && !FUNC_2(&VAR_2, &VAR_3, "local-file"))) {
  FUNC_1("usage: %s local-file\n", VAR_3[0]);
  VAR_1 = -1;
  return;
 }
 if ((VAR_7 = FUNC_6(VAR_3[1])) == ((void*)0)) {
  VAR_1 = -1;
  return;
 }
 VAR_5 = FUNC_5("pager");
 if (FUNC_0(VAR_5))
  VAR_5 = VAR_0;
 VAR_4 = FUNC_9(VAR_5) + FUNC_9(VAR_7) + 2;
 VAR_6 = FUNC_4(VAR_4);
 (void)FUNC_8(VAR_6, VAR_5, VAR_4);
 (void)FUNC_7(VAR_6, " ", VAR_4);
 (void)FUNC_7(VAR_6, VAR_7, VAR_4);
 FUNC_10(VAR_6);
 VAR_1 = 0;
 (void)FUNC_3(VAR_6);
 (void)FUNC_3(VAR_7);
}
