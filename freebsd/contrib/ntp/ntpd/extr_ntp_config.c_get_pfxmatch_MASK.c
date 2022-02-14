
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32 ;
struct masks {int mask; int * name; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char const*,int *,int ) ;

__attribute__((used)) static u_int32
FUNC_2(
 const char ** VAR_0,
 struct masks * VAR_1
 )
{
 while (VAR_1->name != ((void*)0)) {
  if (FUNC_1(*VAR_0, VAR_1->name, FUNC_0(VAR_1->name)) == 0) {
   *VAR_0 += FUNC_0(VAR_1->name);
   return VAR_1->mask;
  } else {
   VAR_1++;
  }
 }
 return 0;
}
