
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1 (
    char *VAR_1)
{
    FUNC_0 (VAR_0,
        " Warning - Emitting ASL code \"External (%s)\"\n"
        "           This is a conflicting declaration with some "
        "other declaration within the ASL code.\n"
        "           This external declaration may need to be "
        "deleted in order to recompile the dsl file.\n\n",
        VAR_1);
}
