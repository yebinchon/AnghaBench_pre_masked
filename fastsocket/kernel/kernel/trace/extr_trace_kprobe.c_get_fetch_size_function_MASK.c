
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fetch_type {int ** fetch; } ;
typedef int * fetch_func_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 struct fetch_type const* VAR_3 ;

__attribute__((used)) static fetch_func_t FUNC_1(const struct fetch_type *VAR_4,
         fetch_func_t VAR_5)
{
 int VAR_6;

 if (VAR_4 != &VAR_3[VAR_1])
  return ((void*)0);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  if (VAR_4->fetch[VAR_6] == VAR_5)
   return VAR_3[VAR_2].fetch[VAR_6];

 FUNC_0(1);
 return ((void*)0);
}
