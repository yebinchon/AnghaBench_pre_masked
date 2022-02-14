
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siis_channel {int r_mem; } ;
typedef scalar_t__ device_t ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct siis_channel* FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(void *VAR_3, int VAR_4)
{
 device_t VAR_5;
 struct siis_channel *VAR_6;

 VAR_5 = (device_t)VAR_3;
 VAR_6 = FUNC_1(VAR_5);

 if (VAR_4 == 0)
  FUNC_0(VAR_6->r_mem, VAR_0, VAR_2);
 else
  FUNC_0(VAR_6->r_mem, VAR_1, VAR_2);
}
