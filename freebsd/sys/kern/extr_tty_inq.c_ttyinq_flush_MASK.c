
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttyinq_block {int tib_data; struct ttyinq_block* tib_next; } ;
struct ttyinq {struct ttyinq_block* ti_firstblock; scalar_t__ ti_end; scalar_t__ ti_reprint; scalar_t__ ti_linestart; scalar_t__ ti_begin; } ;


 int FUNC_0 (int *,int) ;
 scalar_t__ VAR_0 ;

void
FUNC_1(struct ttyinq *VAR_1)
{
 struct ttyinq_block *VAR_2;

 VAR_1->ti_begin = 0;
 VAR_1->ti_linestart = 0;
 VAR_1->ti_reprint = 0;
 VAR_1->ti_end = 0;


 if (VAR_0) {
  for (VAR_2 = VAR_1->ti_firstblock; VAR_2 != ((void*)0); VAR_2 = VAR_2->tib_next)
   FUNC_0(&VAR_2->tib_data, sizeof VAR_2->tib_data);
 }
}
