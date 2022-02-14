
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pt_entry_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static inline int
FUNC_2(pt_entry_t VAR_4)
{

 FUNC_1((VAR_4 & VAR_3) != 0, ("pte %#lx is unmanaged", VAR_4));
 FUNC_1((VAR_4 & (VAR_1 | VAR_2)) != 0,
     ("pte %#lx is writeable and missing ATTR_SW_DBM", VAR_4));

 return ((VAR_4 & (VAR_1 | VAR_2)) ==
     (FUNC_0(VAR_0) | VAR_2));
}
