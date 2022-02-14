
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ dtrace_aggvarid_t ;
typedef int dt_ahashent_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_2, const void *VAR_3)
{
 dt_ahashent_t *VAR_4 = *((dt_ahashent_t **)VAR_2);
 dt_ahashent_t *VAR_5 = *((dt_ahashent_t **)VAR_3);
 dtrace_aggvarid_t VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_4);
 VAR_7 = FUNC_0(VAR_5);

 if (VAR_6 < VAR_7)
  return (VAR_1);

 if (VAR_6 > VAR_7)
  return (VAR_0);

 return (0);
}
