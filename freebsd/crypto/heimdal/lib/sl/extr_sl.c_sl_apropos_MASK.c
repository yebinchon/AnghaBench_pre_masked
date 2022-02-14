
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; int * usage; } ;
typedef TYPE_1__ SL_cmd ;


 int FUNC_0 (char*,char*,int *) ;
 int * FUNC_1 (int *,char const*) ;

void
FUNC_2 (SL_cmd *VAR_0, const char *VAR_1)
{
    for (; VAR_0->name != ((void*)0); ++VAR_0)
        if (VAR_0->usage != ((void*)0) && FUNC_1(VAR_0->usage, VAR_1) != ((void*)0))
     FUNC_0 ("%-20s%s\n", VAR_0->name, VAR_0->usage);
}
