
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_memattr_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static vm_memattr_t
FUNC_1(uint64_t VAR_11)
{
 vm_memattr_t VAR_12;

 if ((VAR_11 & VAR_1) != 0)
  VAR_12 = VAR_6;
 else if ((VAR_11 & VAR_4) != 0)
  VAR_12 = VAR_9;
 else if ((VAR_11 & VAR_2) != 0)
  VAR_12 = VAR_7;
 else if ((VAR_11 & VAR_3) != 0)
  VAR_12 = VAR_8;
 else if ((VAR_11 & VAR_0) != 0)
  VAR_12 = VAR_5;
 else {
  if (VAR_10)
   FUNC_0("SPA mapping attr %#lx unsupported\n",
       VAR_11);
  VAR_12 = VAR_5;
 }
 return (VAR_12);
}
