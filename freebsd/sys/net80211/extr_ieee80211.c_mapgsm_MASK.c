
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static __inline int
FUNC_0(u_int VAR_2, u_int VAR_3)
{
 VAR_2 *= 10;
 if (VAR_3 & VAR_1)
  VAR_2 += 5;
 else if (VAR_3 & VAR_0)
  VAR_2 += 10;
 else
  VAR_2 += 20;

 return (VAR_2 - 906*10) / 5;
}
