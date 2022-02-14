
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * xo_version; } ;
typedef TYPE_1__ xo_handle_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,int ,char*,char const*,...) ;

__attribute__((used)) static void
FUNC_4 (xo_handle_t *VAR_1, const char *VAR_2)
{
    FUNC_3(VAR_1, "%*s{%s", FUNC_2(VAR_1), "", VAR_2);
    FUNC_0(VAR_1, VAR_0);

    if (VAR_1->xo_version) {
 FUNC_3(VAR_1, "%*s\"__version\": \"%s\", %s",
    FUNC_2(VAR_1), "", VAR_1->xo_version, VAR_2);
 FUNC_1(VAR_1->xo_version);
 VAR_1->xo_version = ((void*)0);
    }
}
