
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct k_clock {int clock_getres; } ;
typedef size_t clockid_t ;


 size_t const VAR_0 ;
 size_t const VAR_1 ;
 size_t const VAR_2 ;
 struct k_clock VAR_3 ;
 struct k_clock VAR_4 ;
 struct k_clock* VAR_5 ;

__attribute__((used)) static struct k_clock *FUNC_0(const clockid_t VAR_6)
{
 if (VAR_6 < 0)
  return (VAR_6 & VAR_1) == VAR_0 ?
   &VAR_4 : &VAR_3;

 if (VAR_6 >= VAR_2 || !VAR_5[VAR_6].clock_getres)
  return ((void*)0);
 return &VAR_5[VAR_6];
}
