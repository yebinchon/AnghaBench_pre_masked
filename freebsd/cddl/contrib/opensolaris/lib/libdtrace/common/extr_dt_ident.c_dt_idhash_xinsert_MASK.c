
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t ulong_t ;
struct TYPE_8__ {size_t dh_hashsz; int (* dh_defer ) (TYPE_1__*,TYPE_2__*) ;int dh_nelems; TYPE_2__** dh_hash; int * dh_tmpl; } ;
typedef TYPE_1__ dt_idhash_t ;
struct TYPE_9__ {int di_flags; struct TYPE_9__* di_next; int di_name; } ;
typedef TYPE_2__ dt_ident_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;

void
FUNC_3(dt_idhash_t *VAR_1, dt_ident_t *VAR_2)
{
 ulong_t VAR_3;

 if (VAR_1->dh_tmpl != ((void*)0))
  FUNC_0(VAR_1);

 VAR_3 = FUNC_1(VAR_2->di_name, ((void*)0)) % VAR_1->dh_hashsz;
 VAR_2->di_next = VAR_1->dh_hash[VAR_3];
 VAR_2->di_flags &= ~VAR_0;

 VAR_1->dh_hash[VAR_3] = VAR_2;
 VAR_1->dh_nelems++;

 if (VAR_1->dh_defer != ((void*)0))
  VAR_1->dh_defer(VAR_1, VAR_2);
}
