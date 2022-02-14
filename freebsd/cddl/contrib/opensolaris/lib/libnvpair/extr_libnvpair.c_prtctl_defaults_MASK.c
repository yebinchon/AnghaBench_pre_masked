
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvlist_prtctl {int nvprt_indentinc; char* nvprt_nmfmt; char* nvprt_eomfmt; char* nvprt_btwnarrfmt; struct nvlist_printops* nvprt_custops; struct nvlist_printops* nvprt_dfltops; scalar_t__ nvprt_btwnarrfmt_nl; scalar_t__ nvprt_indent; int nvprt_indent_mode; int * nvprt_fp; } ;
struct nvlist_printops {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(FILE *VAR_2, struct nvlist_prtctl *VAR_3,
    struct nvlist_printops *VAR_4)
{
 VAR_3->nvprt_fp = VAR_2;
 VAR_3->nvprt_indent_mode = VAR_0;
 VAR_3->nvprt_indent = 0;
 VAR_3->nvprt_indentinc = 1;
 VAR_3->nvprt_nmfmt = "%s = ";
 VAR_3->nvprt_eomfmt = "\n";
 VAR_3->nvprt_btwnarrfmt = " ";
 VAR_3->nvprt_btwnarrfmt_nl = 0;

 VAR_3->nvprt_dfltops = (struct nvlist_printops *)&VAR_1;
 VAR_3->nvprt_custops = VAR_4;
}
