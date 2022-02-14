
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct siba_devinfo {int dummy; } ;
struct siba_cfg_block {int cb_rid; } ;
struct siba_addrspace {int sa_rid; } ;
typedef scalar_t__ device_t ;
typedef int bhnd_port_type ;


 int FUNC_0 (scalar_t__,scalar_t__,int ,int ,int ) ;
 struct siba_devinfo* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 struct siba_addrspace* FUNC_3 (struct siba_devinfo*,int ,int ,int ) ;
 struct siba_cfg_block* FUNC_4 (struct siba_devinfo*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0, device_t VAR_1, bhnd_port_type VAR_2,
    u_int VAR_3, u_int VAR_4)
{
 struct siba_devinfo *VAR_5;
 struct siba_addrspace *VAR_6;
 struct siba_cfg_block *VAR_7;


 if (FUNC_2(VAR_1) != VAR_0)
  return (FUNC_0(FUNC_2(VAR_0), VAR_1,
      VAR_2, VAR_3, VAR_4));

 VAR_5 = FUNC_1(VAR_1);


 VAR_6 = FUNC_3(VAR_5, VAR_2, VAR_3, VAR_4);
 if (VAR_6 != ((void*)0))
  return (VAR_6->sa_rid);


 VAR_7 = FUNC_4(VAR_5, VAR_2, VAR_3, VAR_4);
 if (VAR_7 != ((void*)0))
  return (VAR_7->cb_rid);


 return (-1);
}
