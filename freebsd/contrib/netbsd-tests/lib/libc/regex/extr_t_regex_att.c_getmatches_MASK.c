
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static size_t
FUNC_2(const char *VAR_0)
{
 size_t VAR_1;
 char *VAR_2;
 for (VAR_1 = 0; (VAR_2 = FUNC_1(VAR_0, '(')) != ((void*)0); VAR_1++, VAR_0 = VAR_2 + 1)
  continue;
 FUNC_0(VAR_1 != 0, "No parentheses found");
 return VAR_1;
}
