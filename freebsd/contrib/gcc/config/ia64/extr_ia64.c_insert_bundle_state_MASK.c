
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bundle_state {size_t insn_num; scalar_t__ cost; scalar_t__ accumulated_insns_num; scalar_t__ branch_deviation; struct bundle_state* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void** FUNC_0 (int ,struct bundle_state*,int) ;
 struct bundle_state** VAR_3 ;

__attribute__((used)) static int
FUNC_1 (struct bundle_state *VAR_4)
{
  void **VAR_5;

  VAR_5 = FUNC_0 (VAR_2, VAR_4, 1);
  if (*VAR_5 == ((void*)0))
    {
      VAR_4->next = VAR_3 [VAR_4->insn_num];
      VAR_3 [VAR_4->insn_num] = VAR_4;
      *VAR_5 = (void *) VAR_4;
      return VAR_1;
    }
  else if (VAR_4->cost < ((struct bundle_state *) *VAR_5)->cost
    || (VAR_4->cost == ((struct bundle_state *) *VAR_5)->cost
        && (((struct bundle_state *)*VAR_5)->accumulated_insns_num
     > VAR_4->accumulated_insns_num
     || (((struct bundle_state *)
   *VAR_5)->accumulated_insns_num
         == VAR_4->accumulated_insns_num
         && ((struct bundle_state *)
      *VAR_5)->branch_deviation
         > VAR_4->branch_deviation))))

    {
      struct bundle_state VAR_6;

      VAR_6 = *(struct bundle_state *) *VAR_5;
      *(struct bundle_state *) *VAR_5 = *VAR_4;
      ((struct bundle_state *) *VAR_5)->next = VAR_6.next;
      *VAR_4 = VAR_6;
    }
  return VAR_0;
}
