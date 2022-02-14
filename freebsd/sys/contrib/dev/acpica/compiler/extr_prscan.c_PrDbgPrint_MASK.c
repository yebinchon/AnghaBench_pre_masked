
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int ,int,char*,int,char*,char*,char*,int) ;

__attribute__((used)) static void
FUNC_1 (
    char *VAR_4,
    char *VAR_5)
{

    FUNC_0 (VAR_0, "Pr(%.4u) - [%u %s] "
        "%*s %s #%s, IfDepth %u\n",
        VAR_1, VAR_2,
        VAR_3 ? "I" : "E",
        VAR_2 * 4, " ",
        VAR_4, VAR_5, VAR_2);
}
