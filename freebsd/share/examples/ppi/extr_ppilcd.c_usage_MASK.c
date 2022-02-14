
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* l_code; char* l_name; char** l_options; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 TYPE_1__* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(void)
{
    int VAR_5, VAR_6;

    FUNC_1(VAR_4, "usage: %s [-v] [-d drivername] [-f device] [-o options] [args...]\n", VAR_3);
    FUNC_1(VAR_4, "   -D      Increase debugging\n");
    FUNC_1(VAR_4, "   -f      Specify device, default is '%s'\n", VAR_0);
    FUNC_1(VAR_4, "   -d      Specify driver, one of:\n");
    for (VAR_5 = 0; VAR_2[VAR_5].l_code != ((void*)0); VAR_5++) {
 FUNC_1(VAR_4, "              %-10s (%s)%s\n",
  VAR_2[VAR_5].l_code, VAR_2[VAR_5].l_name, (VAR_5 == 0) ? " *default*" : "");
 if (VAR_2[VAR_5].l_options[0] != ((void*)0)) {

     for (VAR_6 = 0; VAR_2[VAR_5].l_options[VAR_6] != ((void*)0); VAR_6++)
  FUNC_1(VAR_4, "                  %s\n", VAR_2[VAR_5].l_options[VAR_6]);
 }
    }
    FUNC_1(VAR_4, "  -o       Specify driver option string\n");
    FUNC_1(VAR_4, "  args     Message strings.  Embedded escapes supported:\n");
    FUNC_1(VAR_4, "                  \\b	Backspace\n");
    FUNC_1(VAR_4, "                  \\f	Clear display, home cursor\n");
    FUNC_1(VAR_4, "                  \\n	Newline\n");
    FUNC_1(VAR_4, "                  \\r	Carriage return\n");
    FUNC_1(VAR_4, "                  \\R	Reset display\n");
    FUNC_1(VAR_4, "                  \\v	Home cursor\n");
    FUNC_1(VAR_4, "                  \\\\	Literal \\\n");
    FUNC_1(VAR_4, "           If args not supplied, strings are read from standard input\n");
    FUNC_0(VAR_1);
}
