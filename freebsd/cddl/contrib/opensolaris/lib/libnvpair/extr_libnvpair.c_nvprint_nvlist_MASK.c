
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int nvlist_t ;
typedef TYPE_1__* nvlist_prtctl_t ;
struct TYPE_5__ {scalar_t__ nvprt_indentinc; int nvprt_indent; int * nvprt_fp; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(nvlist_prtctl_t VAR_0, void *VAR_1,
    nvlist_t *VAR_2, const char *VAR_3, nvlist_t *VAR_4)
{
 FILE *VAR_5 = VAR_0->nvprt_fp;

 FUNC_1(VAR_0, 1);
 (void) FUNC_0(VAR_5, "%s = (embedded nvlist)\n", VAR_3);

 VAR_0->nvprt_indent += VAR_0->nvprt_indentinc;
 FUNC_2(VAR_4, VAR_0);
 VAR_0->nvprt_indent -= VAR_0->nvprt_indentinc;

 FUNC_1(VAR_0, 1);
 (void) FUNC_0(VAR_5, "(end %s)\n", VAR_3);

 return (1);
}
