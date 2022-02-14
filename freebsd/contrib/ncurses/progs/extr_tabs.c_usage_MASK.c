
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (char const**) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(void)
{
    static const char *VAR_3[] =
    {
 "Usage: tabs [options] [tabstop-list]"
 ,""
 ,"Options:"
 ,"  -0       reset tabs"
 ,"  -8       set tabs to standard interval"
 ,"  -a       Assembler, IBM S/370, first format"
 ,"  -a2      Assembler, IBM S/370, second format"
 ,"  -c       COBOL, normal format"
 ,"  -c2      COBOL compact format"
 ,"  -c3      COBOL compact format extended"
 ,"  -d       debug (show ruler with expected/actual tab positions)"
 ,"  -f       FORTRAN"
 ,"  -n       no-op (do not modify terminal settings)"
 ,"  -p       PL/I"
 ,"  -s       SNOBOL"
 ,"  -u       UNIVAC 1100 Assembler"
 ,"  -T name  use terminal type 'name'"
 ,"  -V       print version"
 ,""
 ,"A tabstop-list is an ordered list of column numbers, e.g., 1,11,21"
 ,"or 1,+10,+10 which is the same."
    };
    unsigned VAR_4;

    FUNC_2(VAR_2);
    for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_3); ++VAR_4) {
 FUNC_3(VAR_1, "%s\n", VAR_3[VAR_4]);
    }
    FUNC_0(VAR_0);
}
