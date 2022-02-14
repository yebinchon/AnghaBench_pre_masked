
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

int
FUNC_3(device_t VAR_0, device_t VAR_1, int VAR_2, uint64_t *VAR_3,
    uint32_t *VAR_4)
{
 device_t VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_0);
 VAR_6 = FUNC_0(FUNC_1(VAR_5), VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_6)
  return (VAR_6);

 FUNC_2(VAR_0, *VAR_3);
 return (0);
}
