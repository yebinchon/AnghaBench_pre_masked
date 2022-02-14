
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct alpine_serdes_eth_group_mode {int mode_set; int mode; int lock; } ;
struct al_serdes_grp_obj {int (* mode_set_kr ) (struct al_serdes_grp_obj*) ;int (* mode_set_sgmii ) (struct al_serdes_grp_obj*) ;} ;
typedef enum alpine_serdes_eth_mode { ____Placeholder_alpine_serdes_eth_mode } alpine_serdes_eth_mode ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,size_t,struct al_serdes_grp_obj*) ;
 struct alpine_serdes_eth_group_mode* VAR_3 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * VAR_4 ;
 int FUNC_4 (struct al_serdes_grp_obj*) ;
 int FUNC_5 (struct al_serdes_grp_obj*) ;

int
FUNC_6(uint32_t VAR_5, enum alpine_serdes_eth_mode VAR_6)
{
 struct alpine_serdes_eth_group_mode *VAR_7;

 VAR_7 = &VAR_3[VAR_5];

 if (VAR_4 == ((void*)0))
  return (VAR_1);

 if (VAR_5 >= VAR_2)
  return (VAR_1);

 FUNC_2(&VAR_7->lock);

 if (!VAR_7->mode_set || (VAR_7->mode != VAR_6)) {
  struct al_serdes_grp_obj VAR_8;

  FUNC_0(FUNC_1(VAR_5),
      VAR_5, &VAR_8);

  if (VAR_6 == VAR_0)
   VAR_8.mode_set_sgmii(&VAR_8);
  else
   VAR_8.mode_set_kr(&VAR_8);

  VAR_7->mode = VAR_6;
  VAR_7->mode_set = 1;
 }

 FUNC_3(&VAR_7->lock);

 return (0);
}
