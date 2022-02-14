
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sppp {int pap_my_to_ch; int * ch; scalar_t__* pp_rseq; scalar_t__* pp_seq; scalar_t__* fail_counter; int * state; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static void
FUNC_1(struct sppp *VAR_2)
{

 VAR_2->state[VAR_0] = VAR_1;
 VAR_2->fail_counter[VAR_0] = 0;
 VAR_2->pp_seq[VAR_0] = 0;
 VAR_2->pp_rseq[VAR_0] = 0;
  FUNC_0(&VAR_2->ch[VAR_0], 1);
  FUNC_0(&VAR_2->pap_my_to_ch, 1);
}
