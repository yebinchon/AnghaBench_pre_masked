
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct siba_core_id {int num_admatch; } ;
typedef scalar_t__ bhnd_port_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct siba_core_id*,scalar_t__,int) ;

int
FUNC_1(struct siba_core_id *VAR_2, bhnd_port_type VAR_3,
    u_int VAR_4, u_int VAR_5, u_int *VAR_6)
{
 u_int VAR_7;


 if (VAR_3 != VAR_0)
  return (VAR_1);


 if (!FUNC_0(VAR_2, VAR_3, VAR_4))
  return (VAR_1);

 if (VAR_4 == 0)
  VAR_7 = VAR_5;
 else if (VAR_4 == 1)
  VAR_7 = VAR_5 + 1;
 else
  return (VAR_1);

 if (VAR_7 >= VAR_2->num_admatch)
  return (VAR_1);


 *VAR_6 = VAR_7;
 return (0);
}
