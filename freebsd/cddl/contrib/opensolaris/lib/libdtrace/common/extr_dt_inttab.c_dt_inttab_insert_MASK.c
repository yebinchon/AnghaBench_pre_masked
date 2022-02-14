
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint_t ;
typedef int uint64_t ;
struct TYPE_5__ {int int_hashlen; TYPE_2__* int_tail; TYPE_2__* int_head; int int_nelems; TYPE_2__** int_hash; int int_index; int int_hdl; } ;
typedef TYPE_1__ dt_inttab_t ;
struct TYPE_6__ {int inh_value; int inh_flags; int inh_index; struct TYPE_6__* inh_next; struct TYPE_6__* inh_hash; } ;
typedef TYPE_2__ dt_inthash_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int) ;

int
FUNC_1(dt_inttab_t *VAR_1, uint64_t VAR_2, uint_t VAR_3)
{
 uint_t VAR_4 = VAR_2 & (VAR_1->int_hashlen - 1);
 dt_inthash_t *VAR_5;

 if (VAR_3 & VAR_0) {
  for (VAR_5 = VAR_1->int_hash[VAR_4]; VAR_5 != ((void*)0); VAR_5 = VAR_5->inh_hash) {
   if (VAR_5->inh_value == VAR_2 && VAR_5->inh_flags == VAR_3)
    return (VAR_5->inh_index);
  }
 }

 if ((VAR_5 = FUNC_0(VAR_1->int_hdl, sizeof (dt_inthash_t))) == ((void*)0))
  return (-1);

 VAR_5->inh_hash = VAR_1->int_hash[VAR_4];
 VAR_5->inh_next = ((void*)0);
 VAR_5->inh_value = VAR_2;
 VAR_5->inh_index = VAR_1->int_index++;
 VAR_5->inh_flags = VAR_3;

 VAR_1->int_hash[VAR_4] = VAR_5;
 VAR_1->int_nelems++;

 if (VAR_1->int_head == ((void*)0))
  VAR_1->int_head = VAR_5;
 else
  VAR_1->int_tail->inh_next = VAR_5;

 VAR_1->int_tail = VAR_5;
 return (VAR_5->inh_index);
}
