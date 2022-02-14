
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t ulong_t ;
struct TYPE_6__ {int ctf_dthashlen; int ctf_dtdefs; TYPE_2__** ctf_dthash; } ;
typedef TYPE_1__ ctf_file_t ;
struct TYPE_7__ {int dtd_type; struct TYPE_7__* dtd_hash; } ;
typedef TYPE_2__ ctf_dtdef_t ;


 int FUNC_0 (int *,TYPE_2__*) ;

void
FUNC_1(ctf_file_t *VAR_0, ctf_dtdef_t *VAR_1)
{
 ulong_t VAR_2 = VAR_1->dtd_type & (VAR_0->ctf_dthashlen - 1);

 VAR_1->dtd_hash = VAR_0->ctf_dthash[VAR_2];
 VAR_0->ctf_dthash[VAR_2] = VAR_1;
 FUNC_0(&VAR_0->ctf_dtdefs, VAR_1);
}
