
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int const*,int *,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int const*,int *,int ) ;

int
FUNC_4(const nvlist_t *VAR_1, nvlist_t *VAR_2)
{
 int VAR_3;
 uint16_t VAR_4;

 VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_0,
     VAR_0);
 if (VAR_3 != 0)
  return (VAR_3);

 VAR_4 = FUNC_0(VAR_2);

 VAR_3 = FUNC_3(VAR_1, VAR_2, VAR_4);
 if (VAR_3 != 0)
  return (VAR_3);

 return (FUNC_2(VAR_2, VAR_4));
}
