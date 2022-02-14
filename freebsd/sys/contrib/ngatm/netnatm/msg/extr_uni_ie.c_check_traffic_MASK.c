
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct tallow {scalar_t__ mask; scalar_t__ mopt_flag; scalar_t__ mopt_mask; scalar_t__ mopt_val; } ;



__attribute__((used)) static int
FUNC_0(u_int VAR_0, u_int VAR_1, struct tallow *VAR_2)
{
 if(VAR_0 != VAR_2->mask)
  return 0;

 if(VAR_2->mopt_flag == 0) {

  if(VAR_1 == 0xffff)
   return 1;
  return 0;
 }

 if(VAR_2->mopt_flag < 0) {

  if(VAR_1 == 0xffff)
   return 1;
  if((VAR_1 & VAR_2->mopt_mask) == VAR_2->mopt_val)
   return 1;
  return 0;
 }


 if(VAR_1 == 0xffff)
  return 0;
 if((VAR_1 & VAR_2->mopt_mask) == VAR_2->mopt_val)
  return 1;
 return 0;
}
