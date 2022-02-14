
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const*,size_t) ;
 int VAR_0 ;
 int * FUNC_1 (char const*,char*) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_1, size_t VAR_2)
{
 if (VAR_1 && FUNC_1(VAR_1, "BUG") != ((void*)0))
  FUNC_0(VAR_0, "Expected %s at line %zu\n", VAR_1, VAR_2);
}
