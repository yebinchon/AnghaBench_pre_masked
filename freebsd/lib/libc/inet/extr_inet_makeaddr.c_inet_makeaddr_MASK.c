
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {unsigned int s_addr; } ;
typedef unsigned int in_addr_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (unsigned int) ;

struct in_addr
FUNC_1(in_addr_t VAR_6, in_addr_t VAR_7)
{
 struct in_addr VAR_8;

 if (VAR_6 < 128U)
  VAR_8.s_addr = (VAR_6 << VAR_1) | (VAR_7 & VAR_0);
 else if (VAR_6 < 65536U)
  VAR_8.s_addr = (VAR_6 << VAR_3) | (VAR_7 & VAR_2);
 else if (VAR_6 < 16777216L)
  VAR_8.s_addr = (VAR_6 << VAR_5) | (VAR_7 & VAR_4);
 else
  VAR_8.s_addr = VAR_6 | VAR_7;
 VAR_8.s_addr = FUNC_0(VAR_8.s_addr);
 return (VAR_8);
}
