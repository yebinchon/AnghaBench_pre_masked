
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int ) ;
 int* FUNC_1 (int,int ,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int,int*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_5, uint32_t VAR_6, uint32_t VAR_7)
{
 u_int *VAR_8;
 uint32_t VAR_9;
 int VAR_10;

 if (VAR_4 != 0)
  return (VAR_0);

 VAR_8 = FUNC_1(VAR_6 * sizeof(*VAR_8), VAR_1, VAR_3 | VAR_2);

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
  VAR_8[VAR_9] = (VAR_9 % VAR_7) + 1;

 VAR_10 = FUNC_2(VAR_5, VAR_6, VAR_8);
 FUNC_0(VAR_8, VAR_1);
 return (VAR_10);
}
