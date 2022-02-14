
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int runlist_element ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static inline runlist_element *FUNC_7(runlist_element *VAR_1,
  int VAR_2, int VAR_3)
{
 runlist_element *VAR_4;

 VAR_2 = FUNC_1(VAR_2 * sizeof(*VAR_1));
 VAR_3 = FUNC_1(VAR_3 * sizeof(*VAR_1));
 if (VAR_2 == VAR_3)
  return VAR_1;

 VAR_4 = FUNC_5(VAR_3);
 if (FUNC_6(!VAR_4))
  return FUNC_0(-VAR_0);

 if (FUNC_2(VAR_1 != ((void*)0))) {
  if (FUNC_6(VAR_2 > VAR_3))
   VAR_2 = VAR_3;
  FUNC_3(VAR_4, VAR_1, VAR_2);
  FUNC_4(VAR_1);
 }
 return VAR_4;
}
