
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*,int) ;
 int FUNC_1 (char const*) ;
 char** VAR_2 ;

void
FUNC_2(int VAR_3, const char *VAR_4)
{
 const char *VAR_5;

 if (VAR_3 >= 0 && VAR_3 < VAR_0)
  VAR_5 = VAR_2[VAR_3];
 else
  VAR_5 = "Unknown signal";
 if (VAR_4 != ((void*)0) && *VAR_4 != '\0') {
  (void)FUNC_0(VAR_1, VAR_4, FUNC_1(VAR_4));
  (void)FUNC_0(VAR_1, ": ", 2);
 }
 (void)FUNC_0(VAR_1, VAR_5, FUNC_1(VAR_5));
 (void)FUNC_0(VAR_1, "\n", 1);
}
