
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_varpool_node {scalar_t__ externally_visible; scalar_t__ output; scalar_t__ finalized; scalar_t__ analyzed; scalar_t__ needed; int decl; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int ) ;
 char** VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_1 (struct cgraph_varpool_node*) ;
 char* FUNC_2 (struct cgraph_varpool_node*) ;
 int FUNC_3 (int *,char*,...) ;

void
FUNC_4 (FILE *VAR_2, struct cgraph_varpool_node *VAR_3)
{
  FUNC_3 (VAR_2, "%s:", FUNC_2 (VAR_3));
  FUNC_3 (VAR_2, " availability:%s",
    VAR_1
    ? VAR_0[FUNC_1 (VAR_3)]
    : "not-ready");
  if (FUNC_0 (VAR_3->decl))
    FUNC_3 (VAR_2, " initialized");
  if (VAR_3->needed)
    FUNC_3 (VAR_2, " needed");
  if (VAR_3->analyzed)
    FUNC_3 (VAR_2, " analyzed");
  if (VAR_3->finalized)
    FUNC_3 (VAR_2, " finalized");
  if (VAR_3->output)
    FUNC_3 (VAR_2, " output");
  if (VAR_3->externally_visible)
    FUNC_3 (VAR_2, " externally_visible");
  FUNC_3 (VAR_2, "\n");
}
