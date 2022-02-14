
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttyoutq_block {int dummy; } ;
struct ttyoutq {scalar_t__ to_quota; scalar_t__ to_nblocks; } ;
struct tty {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ttyoutq*,struct ttyoutq_block*) ;
 scalar_t__ FUNC_1 (size_t,int ) ;
 scalar_t__ FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*) ;
 int VAR_3 ;
 struct ttyoutq_block* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,struct ttyoutq_block*) ;

int
FUNC_7(struct ttyoutq *VAR_4, struct tty *VAR_5, size_t VAR_6)
{
 struct ttyoutq_block *VAR_7;

 VAR_4->to_quota = FUNC_1(VAR_6, VAR_2);

 while (VAR_4->to_quota > VAR_4->to_nblocks) {
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
