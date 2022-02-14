
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int device_t ;
typedef int bhnd_port_type ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static bool
FUNC_2(device_t VAR_0, device_t VAR_1,
    bhnd_port_type VAR_2, u_int VAR_3, u_int VAR_4)
{
 if (VAR_3 >= FUNC_0(VAR_1, VAR_2))
  return (0);

 if (VAR_4 >= FUNC_1(VAR_1, VAR_2, VAR_3))
  return (0);

 return (1);
}
