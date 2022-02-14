
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siis_channel {int r_mem; scalar_t__ pm_present; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct siis_channel* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_7)
{
 struct siis_channel *VAR_8 = FUNC_1(VAR_7);


 FUNC_0(VAR_8->r_mem, VAR_0, VAR_4);
 FUNC_0(VAR_8->r_mem, VAR_0, VAR_2);
 if (VAR_8->pm_present)
  FUNC_0(VAR_8->r_mem, VAR_1, VAR_3);
 else
  FUNC_0(VAR_8->r_mem, VAR_0, VAR_3);

 FUNC_0(VAR_8->r_mem, VAR_5, VAR_6);
 return (0);
}
