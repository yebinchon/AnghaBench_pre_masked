
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttyoutq_block {int dummy; } ;
struct ttyoutq {scalar_t__ to_nblocks; struct ttyoutq_block* to_firstblock; scalar_t__ to_quota; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ttyoutq*) ;
 int FUNC_2 (struct ttyoutq*) ;
 int VAR_0 ;
 int FUNC_3 (int ,struct ttyoutq_block*) ;

void
FUNC_4(struct ttyoutq *VAR_1)
{
 struct ttyoutq_block *VAR_2;

 FUNC_2(VAR_1);
 VAR_1->to_quota = 0;

 while ((VAR_2 = VAR_1->to_firstblock) != ((void*)0)) {
  FUNC_1(VAR_1);
  FUNC_3(VAR_0, VAR_2);
 }

 FUNC_0(VAR_1->to_nblocks == 0);
}
