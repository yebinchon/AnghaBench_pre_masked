
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttyinq_block {int dummy; } ;
struct ttyinq {scalar_t__ ti_nblocks; struct ttyinq_block* ti_firstblock; scalar_t__ ti_quota; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ttyinq*) ;
 int FUNC_2 (struct ttyinq*) ;
 int VAR_0 ;
 int FUNC_3 (int ,struct ttyinq_block*) ;

void
FUNC_4(struct ttyinq *VAR_1)
{
 struct ttyinq_block *VAR_2;

 FUNC_2(VAR_1);
 VAR_1->ti_quota = 0;

 while ((VAR_2 = VAR_1->ti_firstblock) != ((void*)0)) {
  FUNC_1(VAR_1);
  FUNC_3(VAR_0, VAR_2);
 }

 FUNC_0(VAR_1->ti_nblocks == 0);
}
