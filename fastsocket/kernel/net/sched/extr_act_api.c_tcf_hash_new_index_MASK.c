
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcf_hashinfo {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__,struct tcf_hashinfo*) ;

u32 FUNC_1(u32 *VAR_0, struct tcf_hashinfo *VAR_1)
{
 u32 VAR_2 = *VAR_0;

 do {
  if (++VAR_2 == 0)
   VAR_2 = 1;
 } while (FUNC_0(VAR_2, VAR_1));

 return (*VAR_0 = VAR_2);
}
