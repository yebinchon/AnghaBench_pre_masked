
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_3, int VAR_4, int VAR_5)
{
 uint32_t VAR_6;


 if (VAR_4 < 0 || VAR_4 > 31)
  return (VAR_1);

 VAR_6 = (1u << VAR_4);

 if (VAR_5 == VAR_0)
  FUNC_0(VAR_2, 0, VAR_6);
 else
  FUNC_0(VAR_2, VAR_6, 0);

 return (0);
}
