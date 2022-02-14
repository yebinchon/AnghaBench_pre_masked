
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef int uint64_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (char*,char*,int ,...) ;
 int FUNC_5 (int) ;
 int * FUNC_6 (int *,int *) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int
FUNC_9(zpool_handle_t *VAR_2, uint64_t VAR_3)
{
 int VAR_4;
 nvlist_t *VAR_5;
 uint64_t VAR_6;

 VAR_5 = FUNC_6(VAR_2, ((void*)0));
 FUNC_5(FUNC_3(VAR_5, VAR_1,
     &VAR_6) == 0);

 FUNC_1(FUNC_0(VAR_6));
 FUNC_1(VAR_6 < VAR_3);

 VAR_4 = FUNC_8(VAR_2, VAR_3);
 if (VAR_4 != 0)
  return (VAR_4);

 if (VAR_3 >= VAR_0) {
  (void) FUNC_4(FUNC_2("Successfully upgraded "
      "'%s' from version %llu to feature flags.\n"),
      FUNC_7(VAR_2), VAR_6);
 } else {
  (void) FUNC_4(FUNC_2("Successfully upgraded "
      "'%s' from version %llu to version %llu.\n"),
      FUNC_7(VAR_2), VAR_6, VAR_3);
 }

 return (0);
}
