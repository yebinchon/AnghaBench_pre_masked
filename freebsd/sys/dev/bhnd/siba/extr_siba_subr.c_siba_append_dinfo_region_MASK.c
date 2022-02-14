
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;
struct siba_devinfo {int resources; struct siba_addrspace* addrspace; } ;
struct siba_addrspace {int sa_base; int sa_size; int sa_bus_reserved; int sa_rid; } ;
typedef int rman_res_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (struct siba_addrspace*) ;
 int FUNC_1 (int *,int ,int,int,int) ;

__attribute__((used)) static int
FUNC_2(struct siba_devinfo *VAR_4, uint8_t VAR_5,
    uint32_t VAR_6, uint32_t VAR_7, uint32_t VAR_8)
{
 struct siba_addrspace *VAR_9;
 rman_res_t VAR_10;


 if (VAR_7 > 0 && VAR_3 - (VAR_7 - 1) < VAR_6)
  return (VAR_1);


 if (VAR_7 < VAR_8)
  return (VAR_1);


 if (VAR_7 == 0)
  return (VAR_0);


 if (VAR_5 >= FUNC_0(VAR_4->addrspace))
  return (VAR_0);


 VAR_9 = &VAR_4->addrspace[VAR_5];
 VAR_9->sa_base = VAR_6;
 VAR_9->sa_size = VAR_7;
 VAR_9->sa_bus_reserved = VAR_8;


 VAR_10 = VAR_7 - VAR_8;
 VAR_9->sa_rid = FUNC_1(&VAR_4->resources, VAR_2,
     VAR_6, VAR_6 + (VAR_10 - 1), VAR_10);

 return (0);
}
