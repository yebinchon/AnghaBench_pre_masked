
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char const* VAR_1 ;
 char const* FUNC_0 () ;
 char* FUNC_1 (char*) ;

const char *
FUNC_2(const char *VAR_2, int VAR_3)
{
 if (VAR_2 != ((void*)0))
  return VAR_2;

 VAR_2 = FUNC_1("MAGIC");
 if (VAR_2 != ((void*)0))
  return VAR_2;

 return VAR_3 == VAR_0 ? FUNC_0() : VAR_1;
}
