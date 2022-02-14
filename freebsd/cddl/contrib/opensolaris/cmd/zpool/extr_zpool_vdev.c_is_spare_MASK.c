
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ pool_state_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int **) ;
 scalar_t__ FUNC_4 (int *,int ,int ***,size_t*) ;
 scalar_t__ FUNC_5 (int *,int ,scalar_t__*) ;
 int FUNC_6 (char const*,int ) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ,int,scalar_t__*,char**,int *) ;
 scalar_t__ FUNC_9 (int,int **) ;

__attribute__((used)) static boolean_t
FUNC_10(nvlist_t *VAR_8, const char *VAR_9)
{
 int VAR_10;
 pool_state_t VAR_11;
 char *VAR_12 = ((void*)0);
 nvlist_t *VAR_13;
 uint64_t VAR_14, VAR_15;
 nvlist_t *VAR_16;
 nvlist_t **VAR_17;
 uint_t VAR_18, VAR_19;
 boolean_t VAR_20;

 if ((VAR_10 = FUNC_6(VAR_9, VAR_2)) < 0)
  return (VAR_0);

 if (FUNC_8(VAR_7, VAR_10, &VAR_11, &VAR_12, &VAR_20) != 0 ||
     !VAR_20 ||
     VAR_11 != VAR_3 ||
     FUNC_9(VAR_10, &VAR_13) != 0) {
  FUNC_1(VAR_12);
  (void) FUNC_0(VAR_10);
  return (VAR_0);
 }
 FUNC_1(VAR_12);
 (void) FUNC_0(VAR_10);

 FUNC_7(FUNC_5(VAR_13, VAR_4, &VAR_14) == 0);
 FUNC_2(VAR_13);

 FUNC_7(FUNC_3(VAR_8, VAR_6,
     &VAR_16) == 0);
 if (FUNC_4(VAR_16, VAR_5,
     &VAR_17, &VAR_19) == 0) {
  for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++) {
   FUNC_7(FUNC_5(VAR_17[VAR_18],
       VAR_4, &VAR_15) == 0);
   if (VAR_15 == VAR_14)
    return (VAR_1);
  }
 }

 return (VAR_0);
}
