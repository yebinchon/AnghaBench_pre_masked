
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tbl ;


 char* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,char const*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(void)
{
    static const char *VAR_2[] =
    {
 ""
 ,"Options:"
 ,"  -c          set control characters"
 ,"  -e ch       erase character"
 ,"  -I          no initialization strings"
 ,"  -i ch       interrupt character"
 ,"  -k ch       kill character"
 ,"  -m mapping  map identifier to type"
 ,"  -Q          do not output control key settings"
 ,"  -r          display term on stderr"
 ,"  -s          output TERM set command"
 ,"  -V          print curses-version"
 ,"  -w          set window-size"
    };
    unsigned VAR_3;
    (void) FUNC_1(VAR_1, "Usage: %s [options] [terminal]\n", VAR_0);
    for (VAR_3 = 0; VAR_3 < sizeof(VAR_2) / sizeof(VAR_2[0]); ++VAR_3)
 FUNC_1(VAR_1, "%s\n", VAR_2[VAR_3]);
    FUNC_0();

}
