
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t ulong_t ;
struct TYPE_8__ {size_t dh_hashsz; struct TYPE_8__* di_name; struct TYPE_8__* di_next; struct TYPE_8__** dh_hash; TYPE_1__* di_ops; } ;
typedef TYPE_2__ dt_idhash_t ;
typedef TYPE_2__ dt_ident_t ;
struct TYPE_7__ {int (* di_dtor ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2(dt_idhash_t *VAR_0)
{
 dt_ident_t *VAR_1, *VAR_2;
 ulong_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->dh_hashsz; VAR_3++) {
  for (VAR_1 = VAR_0->dh_hash[VAR_3]; VAR_1 != ((void*)0); VAR_1 = VAR_2) {
   VAR_2 = VAR_1->di_next;
   VAR_1->di_ops->di_dtor(VAR_1);
  }
 }

 for (VAR_3 = 0; VAR_3 < VAR_0->dh_hashsz; VAR_3++) {
  for (VAR_1 = VAR_0->dh_hash[VAR_3]; VAR_1 != ((void*)0); VAR_1 = VAR_2) {
   VAR_2 = VAR_1->di_next;
   FUNC_0(VAR_1->di_name);
   FUNC_0(VAR_1);
  }
 }

 FUNC_0(VAR_0);
}
