
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unix_sock {int link; scalar_t__ gc_maybe_cycle; int inflight; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct unix_sock *VAR_1)
{
 FUNC_0(&VAR_1->inflight);





 if (VAR_1->gc_maybe_cycle)
  FUNC_1(&VAR_1->link, &VAR_0);
}
