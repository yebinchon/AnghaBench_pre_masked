
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u_long
FUNC_0(char *VAR_3, int VAR_4)
{
 char *VAR_5;
 char *VAR_6;
 u_long VAR_7 = VAR_0;




 VAR_6 = VAR_3;
 VAR_5 = VAR_3 + VAR_2;
 while (VAR_6 < VAR_5)
  VAR_7 += (u_long)(*VAR_6++ & 0xff);







 VAR_6 += VAR_1;
 VAR_5 = VAR_3 + VAR_4;
 while (VAR_6 < VAR_5)
  VAR_7 += (u_long)(*VAR_6++ & 0xff);
 return(VAR_7);
}
