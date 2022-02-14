
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef int zpool_boot_label_t ;
typedef int uint64_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int * FUNC_1 (int,char**) ;
 scalar_t__ FUNC_2 (int *,int *,int,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *,int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *) ;

nvlist_t *
FUNC_6(zpool_handle_t *VAR_2, int VAR_3, int VAR_4,
    boolean_t VAR_5, boolean_t VAR_6, zpool_boot_label_t VAR_7,
    uint64_t VAR_8, int VAR_9, char **VAR_10)
{
 nvlist_t *VAR_11;
 nvlist_t *VAR_12 = ((void*)0);
 VAR_1 = VAR_3;






 if ((VAR_11 = FUNC_1(VAR_9, VAR_10)) == ((void*)0))
  return (((void*)0));

 if (VAR_2 && ((VAR_12 = FUNC_5(VAR_2, ((void*)0))) == ((void*)0)))
  return (((void*)0));







 if (FUNC_2(VAR_12, VAR_11, VAR_3, VAR_5, VAR_0)) {
  FUNC_4(VAR_11);
  return (((void*)0));
 }






 if (VAR_4 && FUNC_0(VAR_12, VAR_11) != 0) {
  FUNC_4(VAR_11);
  return (((void*)0));
 }
 return (VAR_11);
}
