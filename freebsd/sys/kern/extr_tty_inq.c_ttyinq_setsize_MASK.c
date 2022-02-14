
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttyinq_block {int dummy; } ;
struct ttyinq {scalar_t__ ti_quota; scalar_t__ ti_nblocks; } ;
struct tty {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ttyinq*,struct ttyinq_block*) ;
 scalar_t__ FUNC_1 (size_t,int ) ;
 scalar_t__ FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*) ;
 int VAR_3 ;
 struct ttyinq_block* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,struct ttyinq_block*) ;

int
FUNC_7(struct ttyinq *VAR_4, struct tty *VAR_5, size_t VAR_6)
{
 struct ttyinq_block *VAR_7;

 VAR_4->ti_quota = FUNC_1(VAR_6, VAR_2);

 while (VAR_4->ti_quota > VAR_4->ti_nblocks) {
  FUNC_4(VAR_5);
  VAR_7 = FUNC_5(VAR_3, VAR_1);
  FUNC_3(VAR_5);

  if (FUNC_2(VAR_5)) {
   FUNC_6(VAR_3, VAR_7);
   return (VAR_0);
  }

  FUNC_0(VAR_4, VAR_7);
 }
 return (0);
}
