
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 int VAR_0 ;

time_t
FUNC_0(time_t *VAR_1)
{
 time_t VAR_2;

 VAR_2 = VAR_0 / 1000;
 if (VAR_1 != ((void*)0))
  *VAR_1 = VAR_2;

 return (VAR_2);
}
