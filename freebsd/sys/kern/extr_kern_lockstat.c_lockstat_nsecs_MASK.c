
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct lock_object {int lo_flags; } ;
struct bintime {int sec; int frac; } ;


 int VAR_0 ;
 int FUNC_0 (struct bintime*) ;
 int VAR_1 ;

uint64_t
FUNC_1(struct lock_object *VAR_2)
{
 struct bintime VAR_3;
 uint64_t VAR_4;

 if (!VAR_1)
  return (0);
 if ((VAR_2->lo_flags & VAR_0) != 0)
  return (0);

 FUNC_0(&VAR_3);
 VAR_4 = VAR_3.sec * (uint64_t)1000000000;
 VAR_4 += ((uint64_t)1000000000 * (uint32_t)(VAR_3.frac >> 32)) >> 32;
 return (VAR_4);
}
