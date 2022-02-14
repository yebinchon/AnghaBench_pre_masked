
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (char const*,int ,int ,int ,int ) ;

nvpair_t *
FUNC_6(const char *VAR_2, nvlist_t *VAR_3)
{
 nvpair_t *VAR_4;

 if (VAR_3 == ((void*)0) || FUNC_3(VAR_3) != ((void*)0)) {
  FUNC_0(VAR_0);
  return (((void*)0));
 }

 if (FUNC_2(VAR_3) != 0) {
  FUNC_0(FUNC_2(VAR_3));
  FUNC_1(VAR_3);
  return (((void*)0));
 }

 VAR_4 = FUNC_5(VAR_2, VAR_1, (uint64_t)(uintptr_t)VAR_3,
     0, 0);
 if (VAR_4 == ((void*)0))
  FUNC_1(VAR_3);
 else
  FUNC_4(VAR_3, VAR_4);

 return (VAR_4);
}
