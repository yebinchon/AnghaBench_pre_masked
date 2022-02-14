
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttydisc_recalc_length {int curlen; struct tty* tp; } ;
struct tty {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 char VAR_0 ;
 scalar_t__ FUNC_1 (char,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(void *VAR_3, char VAR_4, int VAR_5)
{
 struct ttydisc_recalc_length *VAR_6 = VAR_3;
 struct tty *VAR_7 = VAR_6->tp;

 if (FUNC_1(VAR_4, VAR_5)) {
  if (FUNC_0(VAR_2, VAR_1))
   VAR_6->curlen += 2;
 } else if (VAR_4 == VAR_0) {
  VAR_6->curlen += 8 - (VAR_6->curlen & 7);
 } else {
  VAR_6->curlen++;
 }
}
