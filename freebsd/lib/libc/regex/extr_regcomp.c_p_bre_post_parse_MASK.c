
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parse {TYPE_1__* g; } ;
struct branchc {scalar_t__ terminate; } ;
struct TYPE_2__ {int neol; int iflags; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct parse *VAR_2, struct branchc *VAR_3)
{


 if (VAR_3->terminate) {
  FUNC_0(1);
  FUNC_1(VAR_0, 0);
  VAR_2->g->iflags |= VAR_1;
  VAR_2->g->neol++;
 }
}
