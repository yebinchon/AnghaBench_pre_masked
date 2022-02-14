
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_1, device_t VAR_2, rman_res_t VAR_3)
{
 if (VAR_3 > VAR_0)
  FUNC_1("invalid irq: %ju", (uintmax_t)VAR_3);

 FUNC_0(VAR_3);
}
