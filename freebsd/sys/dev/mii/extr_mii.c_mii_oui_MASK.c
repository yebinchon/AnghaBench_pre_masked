
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int FUNC_0 (int) ;

u_int
FUNC_1(u_int VAR_0, u_int VAR_1)
{
 u_int VAR_2;

 VAR_2 = (VAR_0 << 6) | (VAR_1 >> 10);

 return ((FUNC_0(VAR_2 >> 16) << 16) |
     (FUNC_0((VAR_2 >> 8) & 0xff) << 8) |
     FUNC_0(VAR_2 & 0xff));
}
