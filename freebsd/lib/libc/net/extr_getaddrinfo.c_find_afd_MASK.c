
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afd {int a_af; } ;


 int VAR_0 ;
 struct afd* VAR_1 ;

__attribute__((used)) static const struct afd *
FUNC_0(int VAR_2)
{
 const struct afd *VAR_3;

 if (VAR_2 == VAR_0)
  return ((void*)0);
 for (VAR_3 = VAR_1; VAR_3->a_af; VAR_3++) {
  if (VAR_3->a_af == VAR_2)
   return VAR_3;
 }
 return ((void*)0);
}
