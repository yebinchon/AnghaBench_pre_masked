
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int **) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,scalar_t__*) ;

nvlist_t *
FUNC_4(zpool_handle_t *VAR_2)
{
 nvlist_t *VAR_3, *VAR_4;

 VAR_3 = FUNC_2(VAR_2, ((void*)0));

 if (VAR_3 == ((void*)0) || !FUNC_0(VAR_3,
     VAR_1)) {
  int VAR_5;
  boolean_t VAR_6 = VAR_0;

  VAR_5 = FUNC_3(VAR_2, &VAR_6);

  if (VAR_5 != 0 || VAR_6)
   return (((void*)0));

  VAR_3 = FUNC_2(VAR_2, ((void*)0));
 }

 if (FUNC_1(VAR_3, VAR_1,
     &VAR_4) != 0)
  return (((void*)0));

 return (VAR_4);
}
