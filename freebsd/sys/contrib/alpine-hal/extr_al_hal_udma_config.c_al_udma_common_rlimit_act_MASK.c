
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct udma_rlimit_common {int sw_ctrl; int cfg_1s; } ;
typedef enum al_udma_m2s_rlimit_action { ____Placeholder_al_udma_m2s_rlimit_action } al_udma_m2s_rlimit_action ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct udma_rlimit_common *VAR_4,
       enum al_udma_m2s_rlimit_action VAR_5)
{
 uint32_t VAR_6;

 switch (VAR_5) {
 case 130:
  VAR_6 = FUNC_0(&VAR_4->cfg_1s);
  VAR_6 |= VAR_1;
  FUNC_1(&VAR_4->cfg_1s, VAR_6);
  break;
 case 129:
  VAR_6 = FUNC_0(&VAR_4->cfg_1s);
  VAR_6 |= VAR_2;
  FUNC_1(&VAR_4->cfg_1s, VAR_6);
  break;
 case 128:
  VAR_6 = FUNC_0(&VAR_4->sw_ctrl);
  VAR_6 |= VAR_3;
  FUNC_1(&VAR_4->sw_ctrl, VAR_6);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
