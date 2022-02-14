
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parse {TYPE_1__* g; } ;
typedef scalar_t__ sopno ;
struct TYPE_2__ {int neol; int iflags; int nbol; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct parse*,int) ;

__attribute__((used)) static void
FUNC_8(struct parse *VAR_5,
    int VAR_6,
    int VAR_7)
{
 sopno VAR_8 = FUNC_3();
 int VAR_9 = 1;
 int VAR_10 = 0;

 if (FUNC_1('^')) {
  FUNC_2(VAR_0, 0);
  VAR_5->g->iflags |= VAR_3;
  VAR_5->g->nbol++;
 }
 while (FUNC_4() && !FUNC_6(VAR_6, VAR_7)) {
  VAR_10 = FUNC_7(VAR_5, VAR_9);
  VAR_9 = 0;
 }
 if (VAR_10) {
  FUNC_0(1);
  FUNC_2(VAR_1, 0);
  VAR_5->g->iflags |= VAR_4;
  VAR_5->g->neol++;
 }

 FUNC_5(FUNC_3() != VAR_8, VAR_2);
}
