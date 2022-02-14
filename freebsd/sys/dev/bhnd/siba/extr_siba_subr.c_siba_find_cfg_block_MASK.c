
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct siba_devinfo {struct siba_cfg_block* cfg; int core_id; } ;
struct siba_cfg_block {int dummy; } ;
typedef int bhnd_port_type ;


 int FUNC_0 (int *,int ,size_t,size_t,size_t*) ;

struct siba_cfg_block *
FUNC_1(struct siba_devinfo *VAR_0, bhnd_port_type VAR_1, u_int VAR_2,
    u_int VAR_3)
{
 u_int VAR_4;
 int VAR_5;


 VAR_5 = FUNC_0(&VAR_0->core_id, VAR_1, VAR_2, VAR_3, &VAR_4);
 if (VAR_5)
  return (((void*)0));


 return (&VAR_0->cfg[VAR_4]);
}
