
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_2, int VAR_3)
{
 char *VAR_4;
 char *VAR_5;

 VAR_0;
 VAR_5 = FUNC_1(VAR_2);
 if ((VAR_4 = FUNC_3(VAR_5, '=')) != ((void*)0))
  *VAR_4 = '\0';
 if (VAR_3 && VAR_4 != ((void*)0))
  (void) FUNC_2(VAR_5, VAR_4 + 1, 1);
 else
  (void) FUNC_4(VAR_5);
 FUNC_0(VAR_5);
 VAR_1;

 return;
}
