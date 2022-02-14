
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct siba_core_id {int num_admatch; int num_cfg_blocks; } ;
typedef int bhnd_port_type ;




 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (struct siba_core_id*,int,int) ;

u_int
FUNC_4(struct siba_core_id *VAR_0, bhnd_port_type VAR_1,
    u_int VAR_2)
{

 if (!FUNC_3(VAR_0, VAR_1, VAR_2))
  return (0);

 switch (VAR_1) {
 case 128:

  if (VAR_2 == 0)
   return (FUNC_1(VAR_0->num_admatch, 1));


  if (VAR_2 == 1 && VAR_0->num_admatch >= 2)
   return (VAR_0->num_admatch - 1);

  break;

 case 129:

  if (VAR_2 == 0)
   return (VAR_0->num_cfg_blocks);

  break;

 default:
  break;
 }


 FUNC_2("siba_is_port_valid() returned true for unknown %s.%u port",
     FUNC_0(VAR_1), VAR_2);

}
