
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ulong_t ;
typedef int uint_t ;
struct TYPE_4__ {size_t dh_hashsz; int dh_nextid; TYPE_2__** dh_hash; int dh_minid; } ;
typedef TYPE_1__ dt_idhash_t ;
struct TYPE_5__ {scalar_t__ di_kind; scalar_t__ di_id; struct TYPE_5__* di_next; } ;
typedef TYPE_2__ dt_ident_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;

void
FUNC_1(dt_idhash_t *VAR_3)
{
 uint_t VAR_4 = VAR_3->dh_minid;
 dt_ident_t *VAR_5;
 ulong_t VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3->dh_hashsz; VAR_6++) {
  for (VAR_5 = VAR_3->dh_hash[VAR_6]; VAR_5 != ((void*)0); VAR_5 = VAR_5->di_next) {




   if (VAR_5->di_kind == VAR_1 ||
       VAR_5->di_kind == VAR_2 ||
       VAR_5->di_kind == VAR_0)
    VAR_4 = FUNC_0(VAR_4, VAR_5->di_id + 1);
  }
 }

 VAR_3->dh_nextid = VAR_4;
}
