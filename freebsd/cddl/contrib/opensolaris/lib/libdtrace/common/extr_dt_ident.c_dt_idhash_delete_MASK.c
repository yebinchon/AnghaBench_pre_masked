
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t ulong_t ;
struct TYPE_6__ {size_t dh_hashsz; scalar_t__ dh_nelems; TYPE_2__** dh_hash; } ;
typedef TYPE_1__ dt_idhash_t ;
struct TYPE_7__ {int di_flags; struct TYPE_7__* di_next; int di_name; } ;
typedef TYPE_2__ dt_ident_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 size_t FUNC_2 (int ,size_t*) ;

void
FUNC_3(dt_idhash_t *VAR_1, dt_ident_t *VAR_2)
{
 size_t VAR_3;
 ulong_t VAR_4 = FUNC_2(VAR_2->di_name, &VAR_3) % VAR_1->dh_hashsz;
 dt_ident_t **VAR_5 = &VAR_1->dh_hash[VAR_4];
 dt_ident_t *VAR_6;

 for (VAR_6 = VAR_1->dh_hash[VAR_4]; VAR_6 != ((void*)0); VAR_6 = VAR_6->di_next) {
  if (VAR_6 == VAR_2)
   break;
  else
   VAR_5 = &VAR_6->di_next;
 }

 FUNC_0(VAR_6 == VAR_2);
 *VAR_5 = VAR_6->di_next;

 FUNC_0(VAR_1->dh_nelems != 0);
 VAR_1->dh_nelems--;

 if (!(VAR_6->di_flags & VAR_0))
  FUNC_1(VAR_6);
}
