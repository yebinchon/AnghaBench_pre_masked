
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {TYPE_2__* int_head; } ;
typedef TYPE_1__ dt_inttab_t ;
struct TYPE_5__ {int inh_value; struct TYPE_5__* inh_next; } ;
typedef TYPE_2__ dt_inthash_t ;



void
FUNC_0(const dt_inttab_t *VAR_0, uint64_t *VAR_1)
{
 const dt_inthash_t *VAR_2;

 for (VAR_2 = VAR_0->int_head; VAR_2 != ((void*)0); VAR_2 = VAR_2->inh_next)
  *VAR_1++ = VAR_2->inh_value;
}
