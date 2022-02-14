
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {scalar_t__ e_type; int e_flags; } ;
typedef scalar_t__ ino_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct entry* FUNC_0 (scalar_t__) ;

ino_t
FUNC_1(ino_t VAR_4)
{
 struct entry *VAR_5;

 for ( ; VAR_4 > VAR_3; VAR_4--) {
  VAR_5 = FUNC_0(VAR_4);
  if (VAR_5 == ((void*)0) || VAR_5->e_type == VAR_2)
   continue;
  if (VAR_5->e_flags & (VAR_1|VAR_0))
   return (VAR_4);
 }
 return (VAR_4);
}
