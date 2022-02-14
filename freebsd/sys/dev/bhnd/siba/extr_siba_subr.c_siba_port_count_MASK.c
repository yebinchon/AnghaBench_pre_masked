
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct siba_core_id {int num_cfg_blocks; int num_admatch; } ;
typedef int bhnd_port_type ;




 int FUNC_0 (int ,int) ;

u_int
FUNC_1(struct siba_core_id *VAR_0, bhnd_port_type VAR_1)
{
 switch (VAR_1) {
 case 128:

  return (FUNC_0(VAR_0->num_admatch, 2));

 case 129:

  if (VAR_0->num_cfg_blocks > 0)
   return (1);



  return (0);

 default:
  return (0);
 }
}
