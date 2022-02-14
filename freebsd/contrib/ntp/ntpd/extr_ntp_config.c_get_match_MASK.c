
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32 ;
struct masks {int mask; int * name; } ;


 scalar_t__ FUNC_0 (char const*,int *) ;

__attribute__((used)) static u_int32
FUNC_1(
 const char * VAR_0,
 struct masks * VAR_1
 )
{
 while (VAR_1->name != ((void*)0)) {
  if (FUNC_0(VAR_0, VAR_1->name) == 0)
   return VAR_1->mask;
  else
   VAR_1++;
 }
 return 0;
}
