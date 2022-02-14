
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct hhook_head {int hhh_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

uint32_t
FUNC_0(struct hhook_head *VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = 0;

 if (VAR_2 != ((void*)0)) {
  if (VAR_2->hhh_flags & VAR_0)
   VAR_3 = VAR_1;
 }

 return (VAR_3);
}
