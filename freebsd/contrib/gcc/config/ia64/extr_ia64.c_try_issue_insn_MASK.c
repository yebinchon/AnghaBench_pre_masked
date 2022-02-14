
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bundle_state {int dfa_state; } ;
typedef scalar_t__ rtx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bundle_state*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_2 (struct bundle_state *VAR_2, rtx VAR_3)
{
  if (VAR_3 && FUNC_1 (VAR_2->dfa_state, VAR_3) >= 0)
    {
      FUNC_0 (VAR_2);
      return VAR_0;
    }
  return VAR_1;
}
