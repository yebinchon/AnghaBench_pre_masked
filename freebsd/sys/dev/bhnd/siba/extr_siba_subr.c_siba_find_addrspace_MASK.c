
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct siba_devinfo {struct siba_addrspace* addrspace; int core_id; } ;
struct siba_addrspace {int dummy; } ;
typedef int bhnd_port_type ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int ,size_t,size_t,size_t*) ;

struct siba_addrspace *
FUNC_1(struct siba_devinfo *VAR_1, bhnd_port_type VAR_2, u_int VAR_3,
    u_int VAR_4)
{
 u_int VAR_5;
 int VAR_6;


 VAR_6 = FUNC_0(&VAR_1->core_id, VAR_2, VAR_3, VAR_4,
     &VAR_5);
 if (VAR_6)
  return (((void*)0));


 if (VAR_5 >= VAR_0)
  return (((void*)0));

 return (&VAR_1->addrspace[VAR_5]);
}
