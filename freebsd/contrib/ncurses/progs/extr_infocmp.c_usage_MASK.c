
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (char const**) ;
 int FUNC_2 (int ,char*,char const*,...) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(void)
{
    static const char *VAR_2[] =
    {
 "Usage: infocmp [options] [-A directory] [-B directory] [termname...]"
 ,""
 ,"Options:"
 ,"  -0    print single-row"
 ,"  -1    print single-column"
 ,"  -K    use termcap-names and BSD syntax"
 ,"  -C    use termcap-names"
 ,"  -F    compare terminfo-files"
 ,"  -I    use terminfo-names"
 ,"  -L    use long names"
 ,"  -R subset (see manpage)"
 ,"  -T    eliminate size limits (test)"
 ,"  -U    eliminate post-processing of entries"
 ,"  -D    print database locations"
 ,"  -V    print version"



 ,"  -c    list common capabilities"
 ,"  -d    list different capabilities"
 ,"  -e    format output for C initializer"
 ,"  -E    format output as C tables"
 ,"  -f    with -1, format complex strings"
 ,"  -G    format %{number} to %'char'"
 ,"  -g    format %'char' to %{number}"
 ,"  -i    analyze initialization/reset"
 ,"  -l    output terminfo names"
 ,"  -n    list capabilities in neither"
 ,"  -p    ignore padding specifiers"
 ,"  -q    brief listing, removes headers"
 ,"  -r    with -C, output in termcap form"
 ,"  -r    with -F, resolve use-references"
 ,"  -s [d|i|l|c] sort fields"



 ,"  -u    produce source with 'use='"
 ,"  -v number  (verbose)"
 ,"  -w number  (width)"



    };
    const size_t VAR_3 = 3;
    const size_t VAR_4 = FUNC_1(VAR_2);
    const size_t VAR_5 = (VAR_4 - VAR_3 + 1) / 2 + VAR_3;
    size_t VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
 size_t VAR_7 = (VAR_6 < VAR_3) ? VAR_4 : VAR_6 + VAR_5 - VAR_3;
 if (VAR_7 < VAR_4)
     FUNC_2(VAR_1, "%-40.40s%s\n", VAR_2[VAR_6], VAR_2[VAR_7]);
 else
     FUNC_2(VAR_1, "%s\n", VAR_2[VAR_6]);
    }
    FUNC_0(VAR_0);
}
