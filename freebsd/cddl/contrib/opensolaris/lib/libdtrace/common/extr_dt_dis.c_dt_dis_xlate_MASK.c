
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_9__ {int dtdo_xlmlen; TYPE_3__** dtdo_xlmtab; } ;
typedef TYPE_4__ dtrace_difo_t ;
typedef int dif_instr_t ;
struct TYPE_8__ {char* dn_membname; TYPE_2__* dn_membexpr; } ;
struct TYPE_7__ {TYPE_1__* dn_xlator; } ;
struct TYPE_6__ {scalar_t__ dx_id; } ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_3(const dtrace_difo_t *VAR_0,
    const char *VAR_1, dif_instr_t VAR_2, FILE *VAR_3)
{
 uint_t VAR_4 = FUNC_1(VAR_2);

 (void) FUNC_2(VAR_3, "%-4s DT_XLREF[%u], %%r%u",
     VAR_1, VAR_4, FUNC_0(VAR_2));

 if (VAR_4 < VAR_0->dtdo_xlmlen) {
  (void) FUNC_2(VAR_3, "\t\t! DT_XLREF[%u] = %u.%s", VAR_4,
      (uint_t)VAR_0->dtdo_xlmtab[VAR_4]->dn_membexpr->dn_xlator->dx_id,
      VAR_0->dtdo_xlmtab[VAR_4]->dn_membname);
 }
}
