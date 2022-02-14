
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static u_int32_t
FUNC_1(device_t VAR_3)
{




 int VAR_4 = FUNC_0(VAR_3, VAR_0, 4) & 0xf;
 if (VAR_4 >= VAR_1)
  return 0;
 return VAR_2[VAR_4];
}
