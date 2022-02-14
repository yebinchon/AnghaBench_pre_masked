
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * FUNC_1 (int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (char const*,int ,int ,int ,int ) ;

nvpair_t *
FUNC_5(const char *VAR_2, const nvlist_t *VAR_3)
{
 nvlist_t *VAR_4;
 nvpair_t *VAR_5;

 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_0);
  return (((void*)0));
 }

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 == ((void*)0))
  return (((void*)0));

 VAR_5 = FUNC_4(VAR_2, VAR_1, (uint64_t)(uintptr_t)VAR_4, 0,
     0);
 if (VAR_5 == ((void*)0))
  FUNC_2(VAR_4);
 else
  FUNC_3(VAR_4, VAR_5);

 return (VAR_5);
}
