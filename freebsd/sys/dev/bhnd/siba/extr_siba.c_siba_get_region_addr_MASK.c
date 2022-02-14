
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct siba_devinfo {int dummy; } ;
struct siba_cfg_block {scalar_t__ cb_size; int cb_base; } ;
struct siba_addrspace {scalar_t__ sa_bus_reserved; scalar_t__ sa_size; int sa_base; } ;
typedef scalar_t__ device_t ;
typedef scalar_t__ bhnd_size_t ;
typedef int bhnd_port_type ;
typedef int bhnd_addr_t ;


 int FUNC_0 (scalar_t__,scalar_t__,int ,int ,int ,int *,scalar_t__*) ;
 int VAR_0 ;
 struct siba_devinfo* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 struct siba_addrspace* FUNC_3 (struct siba_devinfo*,int ,int ,int ) ;
 struct siba_cfg_block* FUNC_4 (struct siba_devinfo*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1, device_t VAR_2, bhnd_port_type VAR_3,
    u_int VAR_4, u_int VAR_5, bhnd_addr_t *VAR_6, bhnd_size_t *VAR_7)
{
 struct siba_devinfo *VAR_8;
 struct siba_addrspace *VAR_9;
 struct siba_cfg_block *VAR_10;


 if (FUNC_2(VAR_2) != VAR_1) {
  return (FUNC_0(FUNC_2(VAR_1), VAR_2,
      VAR_3, VAR_4, VAR_5, VAR_6, VAR_7));
 }

 VAR_8 = FUNC_1(VAR_2);


 VAR_9 = FUNC_3(VAR_8, VAR_3, VAR_4, VAR_5);
 if (VAR_9 != ((void*)0)) {
  *VAR_6 = VAR_9->sa_base;
  *VAR_7 = VAR_9->sa_size - VAR_9->sa_bus_reserved;
  return (0);
 }


 VAR_10 = FUNC_4(VAR_8, VAR_3, VAR_4, VAR_5);
 if (VAR_10 != ((void*)0)) {
  *VAR_6 = VAR_10->cb_base;
  *VAR_7 = VAR_10->cb_size;
  return (0);
 }


 return (VAR_0);
}
