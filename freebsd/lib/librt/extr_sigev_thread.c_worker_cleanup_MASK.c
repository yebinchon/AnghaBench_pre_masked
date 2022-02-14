
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sigev_node {int sn_flags; TYPE_1__* sn_tn; } ;
struct TYPE_2__ {int tn_cv; int * tn_cur; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sigev_node*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_3)
{
 struct sigev_node *VAR_4 = VAR_3;

 FUNC_1();
 if (VAR_4->sn_flags & VAR_1) {
  VAR_4->sn_tn->tn_cur = ((void*)0);
  FUNC_3(&VAR_4->sn_tn->tn_cv);
 }
 if (VAR_4->sn_flags & VAR_0)
  FUNC_0(VAR_4);
 else
  VAR_4->sn_flags &= ~VAR_2;
 FUNC_2();
}
