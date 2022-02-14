
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,int ) ;
 int FUNC_1 (int const*) ;

int
FUNC_2(const nvlist_t *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 if (VAR_3 != 0)
  return (VAR_3);

 VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (VAR_3 != 0)
  return (VAR_3);

 return (FUNC_1(VAR_2));
}
