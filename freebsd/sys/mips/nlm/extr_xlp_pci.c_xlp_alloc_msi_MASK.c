
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, device_t VAR_2, int VAR_3, int VAR_4, int *VAR_5)
{
 int VAR_6, VAR_7;







 VAR_7 = FUNC_0(VAR_1, VAR_2);
 if (VAR_7 == -1)
  return (VAR_0);





 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  VAR_5[VAR_6] = 64 + VAR_7 * 32 + VAR_6;

 return (0);
}
