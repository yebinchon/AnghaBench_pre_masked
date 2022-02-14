
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* outf_p ;
struct TYPE_6__ {char const* name; struct TYPE_6__* next; } ;


 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char const) ;
 size_t VAR_0 ;
 TYPE_1__** VAR_1 ;
 TYPE_1__* FUNC_2 (char const*,char const*) ;
 char* FUNC_3 (char const*) ;
 char** VAR_2 ;
 scalar_t__ FUNC_4 (char const*,char*,size_t) ;
 int FUNC_5 (char*,char*,int) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_6 (char const*,char const*) ;
 size_t FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*,char*,int) ;
 char* FUNC_9 (char*,char const*) ;

outf_p
FUNC_10 (const char *VAR_4)
{
  outf_p VAR_5;
  size_t VAR_6;
  const char *VAR_7;
  const char *VAR_8;
  const char *VAR_9;




  if (VAR_4 == ((void*)0))
    VAR_4 = "system.h";


  VAR_7 = FUNC_3 (VAR_4);

  VAR_6 = FUNC_7 (VAR_7);
  if ((VAR_6 > 2 && FUNC_4 (VAR_7+VAR_6-2, ".c", 2) == 0)
      || (VAR_6 > 2 && FUNC_4 (VAR_7+VAR_6-2, ".y", 2) == 0)
      || (VAR_6 > 3 && FUNC_4 (VAR_7+VAR_6-3, ".in", 3) == 0))
    {
      char *VAR_10;

      VAR_9 = VAR_10 = FUNC_9 ("gt-%s", VAR_7);
      for (; *VAR_10 != '.'; VAR_10++)
 if (! FUNC_0 (*VAR_10) && *VAR_10 != '-')
   *VAR_10 = '-';
      FUNC_5 (VAR_10, ".h", sizeof (".h"));
      VAR_8 = VAR_7;
    }





  else if (FUNC_6 (VAR_7, "c-common.h") == 0)
    VAR_9 = "gt-c-common.h", VAR_8 = "c-common.c";
  else if (FUNC_6 (VAR_7, "c-tree.h") == 0)
    VAR_9 = "gt-c-decl.h", VAR_8 = "c-decl.c";
  else if (FUNC_8 (VAR_7, "cp", 2) == 0 && FUNC_1 (VAR_7[2])
    && FUNC_6 (VAR_7 + 3, "cp-tree.h") == 0)
    VAR_9 = "gt-cp-tree.h", VAR_8 = "cp/tree.c";
  else if (FUNC_8 (VAR_7, "cp", 2) == 0 && FUNC_1 (VAR_7[2])
    && FUNC_6 (VAR_7 + 3, "decl.h") == 0)
    VAR_9 = "gt-cp-decl.h", VAR_8 = "cp/decl.c";
  else if (FUNC_8 (VAR_7, "cp", 2) == 0 && FUNC_1 (VAR_7[2])
    && FUNC_6 (VAR_7 + 3, "name-lookup.h") == 0)
    VAR_9 = "gt-cp-name-lookup.h", VAR_8 = "cp/name-lookup.c";
  else if (FUNC_8 (VAR_7, "objc", 4) == 0 && FUNC_1 (VAR_7[4])
    && FUNC_6 (VAR_7 + 5, "objc-act.h") == 0)
    VAR_9 = "gt-objc-objc-act.h", VAR_8 = "objc/objc-act.c";
  else
    {
      size_t VAR_11;

      for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++)
 if (FUNC_4 (VAR_7, VAR_2[VAR_11], FUNC_7 (VAR_2[VAR_11])) == 0
     && VAR_7[FUNC_7(VAR_2[VAR_11])] == '/')
   return VAR_1[VAR_11];

      VAR_9 = "gtype-desc.c";
      VAR_8 = ((void*)0);
    }


  for (VAR_5 = VAR_3; VAR_5; VAR_5 = VAR_5->next)
    if (FUNC_6 (VAR_5->name, VAR_9) == 0)
      return VAR_5;


  VAR_5 = FUNC_2 (VAR_8, VAR_9);

  return VAR_5;
}
