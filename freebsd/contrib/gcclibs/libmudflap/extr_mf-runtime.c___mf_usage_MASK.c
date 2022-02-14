
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* name; scalar_t__ value; scalar_t__* target; int type; char* description; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*,...) ;
 struct option* VAR_0 ;
 scalar_t__ VAR_1 ;


 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_4 ()
{
  struct option *VAR_3;

  FUNC_1 (VAR_2,
           "This is a %s%sGCC \"mudflap\" memory-checked binary.\n"
           "Mudflap is Copyright (C) 2002-2004 Free Software Foundation, Inc.\n"
           "\n"
           "The mudflap code can be controlled by an environment variable:\n"
           "\n"
           "$ export MUDFLAP_OPTIONS='<options>'\n"
           "$ <mudflapped_program>\n"
           "\n"
           "where <options> is a space-separated list of \n"
           "any of the following options.  Use `-no-OPTION' to disable options.\n"
           "\n",



           "",




           "thread-unaware "

            );


  for (VAR_3 = VAR_0; VAR_3->name; VAR_3++)
    {
      int VAR_4 = (VAR_3->value == * VAR_3->target);

      switch (VAR_3->type)
        {
          char VAR_5[128];
        case 128:
          FUNC_1 (VAR_2, "-%-23.23s %s", VAR_3->name, VAR_3->description);
          if (VAR_4)
            FUNC_1 (VAR_2, " [active]\n");
          else
            FUNC_1 (VAR_2, "\n");
          break;
        case 129:
          FUNC_3 (VAR_5, VAR_3->name, 128);
          FUNC_3 (VAR_5 + FUNC_2 (VAR_3->name), "=N", 2);
          FUNC_1 (VAR_2, "-%-23.23s %s", VAR_5, VAR_3->description);
          FUNC_1 (VAR_2, " [%ld]\n", * VAR_3->target);
          break;
        default: FUNC_0();
        }
    }

  FUNC_1 (VAR_2, "\n");
}
