
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum hostapd_hw_mode { ____Placeholder_hostapd_hw_mode } hostapd_hw_mode ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;

__attribute__((used)) static int FUNC_1(int VAR_1, int VAR_2)
{
 enum hostapd_hw_mode VAR_3, VAR_4;
 u8 VAR_5, VAR_6;

 VAR_3 = FUNC_0(VAR_1, &VAR_5);
 VAR_4 = FUNC_0(VAR_2, &VAR_6);
 if (VAR_3 == VAR_0)
  return 0;
 return VAR_3 == VAR_4;
}
