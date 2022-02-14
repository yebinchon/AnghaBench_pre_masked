
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct TYPE_2__ {char* (* strip_name_encoding ) (char const*) ;} ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ VAR_0 ;
 char* FUNC_7 (char*,int ,char const*,char*,char*,int *) ;
 int FUNC_8 (int *,char*,char*,...) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int *,char*) ;
 char* FUNC_12 (char const*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

void
FUNC_13 (FILE *VAR_3, tree VAR_4, int VAR_5, int VAR_6)
{
  const char *VAR_7;
  char *VAR_8;
  bool VAR_9;

  if (FUNC_1 (VAR_4))
    VAR_7 = FUNC_5 (FUNC_0 (VAR_4));
  else
    VAR_7 = FUNC_5 (FUNC_2 (VAR_4));

  VAR_7 = VAR_1.strip_name_encoding (VAR_7);
  VAR_9 = FUNC_10 (VAR_7);

  if (! VAR_5)
    return;

  VAR_8 = FUNC_7 (VAR_9 ? "\"" : "", VAR_2, VAR_7, ".eh",
  VAR_9 ? "\"" : "", ((void*)0));

  if (FUNC_6 (VAR_4))
    FUNC_8 (VAR_3, "\t%s %s\n",
      (FUNC_3 (VAR_4) != VAR_0
       ? ".globl"
       : ".private_extern"),
      VAR_8);

  if (FUNC_4 (VAR_4))
    FUNC_8 (VAR_3, "\t.weak_definition %s\n", VAR_8);

  if (VAR_6)
    {
      FUNC_8 (VAR_3, "%s = 0\n", VAR_8);





      FUNC_11 (VAR_3, VAR_8);
    }
  else
    FUNC_8 (VAR_3, "%s:\n", VAR_8);

  FUNC_9 (VAR_8);
}
