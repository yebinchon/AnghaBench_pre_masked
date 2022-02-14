
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char const*,...) ;
 int VAR_0 ;

void
FUNC_2 (const char *VAR_1,
   const char *VAR_2,
   int VAR_3,
   const char *VAR_4)
{

  static size_t VAR_5 = 0;

  if (~(size_t) VAR_4 & ~VAR_5)
    {


      if (VAR_4)
 FUNC_1 (VAR_0, FUNC_0("Deprecated %s called at %s line %d in %s\n"),
   VAR_1, VAR_2, VAR_3, VAR_4);
      else
 FUNC_1 (VAR_0, FUNC_0("Deprecated %s called\n"), VAR_1);
      VAR_5 |= ~(size_t) VAR_4;
    }
}
