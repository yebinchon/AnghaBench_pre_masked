
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ inuse_count; scalar_t__ iter_idx; TYPE_2__* tokens; } ;
typedef TYPE_1__ tokarray_t ;
struct TYPE_7__ {int string; int subtype; int type; } ;
typedef TYPE_2__ tok_t ;
struct TYPE_8__ {int os; } ;
typedef TYPE_3__ ocs_hw_t ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(ocs_hw_t *VAR_0, tokarray_t *VAR_1)
{
 uint32_t VAR_2;
 tok_t *VAR_3;

 FUNC_0(VAR_0->os, "Syntax error:\n");

 for (VAR_2 = 0, VAR_3 = VAR_1->tokens; (VAR_2 <= VAR_1->inuse_count); VAR_2++, VAR_3++) {
  FUNC_0(VAR_0->os, "%s [%2d]    %-16s %-16s %s\n", (VAR_2 == VAR_1->iter_idx) ? ">>>" : "   ", VAR_2,
   FUNC_2(VAR_3->type), FUNC_1(VAR_3->subtype), VAR_3->string);
 }
}
