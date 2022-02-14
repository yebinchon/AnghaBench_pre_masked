
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct format_data {char format; int size; } ;
struct expression {int dummy; } ;
struct cleanup {int dummy; } ;


 int FUNC_0 (struct value*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 struct format_data FUNC_3 (char**,int ,int ) ;
 int FUNC_4 (struct cleanup*) ;
 struct value* FUNC_5 (struct expression*) ;
 int VAR_0 ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 struct cleanup* FUNC_7 (int ,struct expression**) ;
 struct expression* FUNC_8 (char*) ;
 int FUNC_9 (struct value*,char,int ,int ) ;
 int FUNC_10 (struct format_data,char*) ;
 int FUNC_11 (char*) ;

void
FUNC_12 (char *VAR_2, int VAR_3)
{
  struct expression *VAR_4;
  struct cleanup *VAR_5;
  char VAR_6 = 0;
  struct value *VAR_7;
  struct format_data VAR_8;

  if (VAR_2 && *VAR_2 == '/')
    {
      VAR_2++;
      VAR_8 = FUNC_3 (&VAR_2, 0, 0);
      FUNC_10 (VAR_8, "output");
      VAR_6 = VAR_8.format;
    }

  VAR_4 = FUNC_8 (VAR_2);
  VAR_5 = FUNC_7 (VAR_0, &VAR_4);

  VAR_7 = FUNC_5 (VAR_4);

  FUNC_1 (FUNC_0 (VAR_7));

  FUNC_9 (VAR_7, VAR_6, VAR_8.size, VAR_1);

  FUNC_2 ();

  FUNC_11 ("");
  FUNC_6 (VAR_1);

  FUNC_4 (VAR_5);
}
