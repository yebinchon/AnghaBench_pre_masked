
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_3, bool *VAR_4)
{
 uint32_t VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_0);
 if ((VAR_5 & (VAR_2 | VAR_1)) ==
     (VAR_2 | VAR_1))
  *VAR_4 = 1;
 else
  *VAR_4 = 0;

 return (0);
}
