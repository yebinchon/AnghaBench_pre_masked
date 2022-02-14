
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_int ;
typedef scalar_t__ u_char ;



__attribute__((used)) static u_short
FUNC_0(u_short *VAR_0,
  u_int VAR_1)
{
 u_int VAR_2 = 0;
 int VAR_3 = VAR_1 >> 1;

 while (VAR_3-- != 0)
  VAR_2 += *VAR_0++;

 if (VAR_1 & 1)
  VAR_2 += *(u_char *)VAR_0;


 VAR_2 = (VAR_2 >> 16) + (VAR_2 & 0xffff);
 VAR_2 += (VAR_2 >> 16);
 return (~VAR_2);
}
