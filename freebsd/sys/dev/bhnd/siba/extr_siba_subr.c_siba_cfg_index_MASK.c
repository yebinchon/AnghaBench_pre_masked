
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct siba_core_id {scalar_t__ num_cfg_blocks; } ;
typedef scalar_t__ bhnd_port_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct siba_core_id*,scalar_t__,scalar_t__) ;

int
FUNC_1(struct siba_core_id *VAR_3, bhnd_port_type VAR_4,
    u_int VAR_5, u_int VAR_6, u_int *VAR_7)
{

 if (VAR_4 != VAR_0)
  return (VAR_1);


 if (!FUNC_0(VAR_3, VAR_4, VAR_5))
  return (VAR_1);

 if (VAR_6 >= VAR_3->num_cfg_blocks)
  return (VAR_1);

 if (VAR_6 >= VAR_2)
  return (VAR_1);


 *VAR_7 = VAR_6;
 return (0);
}
