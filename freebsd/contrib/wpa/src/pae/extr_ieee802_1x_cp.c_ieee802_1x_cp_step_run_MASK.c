
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802_1x_cp_sm {int CP_state; } ;
typedef enum cp_states { ____Placeholder_cp_states } cp_states ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ieee802_1x_cp_sm *VAR_1)
{
 enum cp_states VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 100; VAR_3++) {
  VAR_2 = VAR_1->CP_state;
  FUNC_0(VAR_0);
  if (VAR_2 == VAR_1->CP_state)
   break;
 }
}
