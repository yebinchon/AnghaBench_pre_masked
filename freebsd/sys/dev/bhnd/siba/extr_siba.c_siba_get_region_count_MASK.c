
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct siba_devinfo {int core_id; } ;
typedef scalar_t__ device_t ;
typedef int bhnd_port_type ;


 int FUNC_0 (scalar_t__,scalar_t__,int ,int ) ;
 struct siba_devinfo* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static u_int
FUNC_4(device_t VAR_0, device_t VAR_1, bhnd_port_type VAR_2,
    u_int VAR_3)
{
 struct siba_devinfo *VAR_4;


 if (FUNC_2(VAR_1) != VAR_0)
  return (FUNC_0(FUNC_2(VAR_0), VAR_1,
      VAR_2, VAR_3));

 VAR_4 = FUNC_1(VAR_1);
 return (FUNC_3(&VAR_4->core_id, VAR_2, VAR_3));
}
