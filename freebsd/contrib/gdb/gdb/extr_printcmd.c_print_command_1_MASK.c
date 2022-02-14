
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct format_data {char format; int count; scalar_t__ size; } ;
struct expression {int dummy; } ;
struct cleanup {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct value*) ;
 struct value* FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 struct format_data FUNC_8 (char**,char,int ) ;
 int FUNC_9 (struct cleanup*) ;
 struct value* FUNC_10 (struct expression*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 struct cleanup* FUNC_11 (int ,struct expression**) ;
 struct expression* FUNC_12 (char*) ;
 int FUNC_13 (struct value*,char,scalar_t__,int ) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (struct value*) ;
 int FUNC_17 (struct format_data,char*) ;

__attribute__((used)) static void
FUNC_18 (char *VAR_5, int VAR_6, int VAR_7)
{
  struct expression *VAR_8;
  struct cleanup *VAR_9 = 0;
  char VAR_10 = 0;
  struct value *VAR_11;
  struct format_data VAR_12;
  int VAR_13 = 0;


  VAR_3 = VAR_6;

  if (VAR_5 && *VAR_5 == '/')
    {
      VAR_5++;
      VAR_12 = FUNC_8 (&VAR_5, VAR_4, 0);
      FUNC_17 (VAR_12, "print");
      VAR_4 = VAR_10 = VAR_12.format;
    }
  else
    {
      VAR_12.count = 1;
      VAR_12.format = 0;
      VAR_12.size = 0;
    }

  if (VAR_5 && *VAR_5)
    {
      struct type *VAR_14;
      VAR_8 = FUNC_12 (VAR_5);
      VAR_9 = FUNC_11 (VAR_1, &VAR_8);
      VAR_13 = 1;
      VAR_11 = FUNC_10 (VAR_8);
    }
  else
    VAR_11 = FUNC_2 (0);

  if (VAR_7 || (VAR_11 && FUNC_1 (VAR_11) &&
      FUNC_0 (FUNC_1 (VAR_11)) != VAR_0))
    {
      int VAR_15 = FUNC_16 (VAR_11);

      if (VAR_15 >= 0)
 FUNC_5 (VAR_15, FUNC_1 (VAR_11));
      else
 FUNC_3 (FUNC_1 (VAR_11));

      if (VAR_6)
 FUNC_15 ("\031(gdb-makebuffer \"%s\"  %d '(\"", VAR_5, VAR_15);
      else if (VAR_15 >= 0)
 FUNC_14 ("$%d = ", VAR_15);

      if (VAR_15 >= 0)
 FUNC_7 ();

      FUNC_13 (VAR_11, VAR_10, VAR_12.size, VAR_2);
      FUNC_14 ("\n");

      if (VAR_15 >= 0)
 FUNC_6 ();
      else
 FUNC_4 ();

      if (VAR_6)
 FUNC_15 ("\") )\030");
    }

  if (VAR_13)
    FUNC_9 (VAR_9);
  VAR_3 = 0;
}
