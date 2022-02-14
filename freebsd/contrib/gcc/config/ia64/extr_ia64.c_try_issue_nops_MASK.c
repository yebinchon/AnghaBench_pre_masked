
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bundle_state {int dfa_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bundle_state*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2 (struct bundle_state *VAR_3, int VAR_4)
{
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    if (FUNC_1 (VAR_3->dfa_state, VAR_2) >= 0)
      {
 FUNC_0 (VAR_3);
 return VAR_0;
      }
  return VAR_1;
}
