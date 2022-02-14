
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int *,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, device_t VAR_3, uint16_t *VAR_4)
{
 uint32_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_0, &VAR_5, 4);
 if (VAR_6)
  return (VAR_6);

 *VAR_4 = (FUNC_0(VAR_5, VAR_1));
 return (0);
}
