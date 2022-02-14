
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int spa_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int guid_as_str ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int ,int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ,int **) ;
 scalar_t__ FUNC_8 (int *,int ,scalar_t__*) ;
 int * FUNC_9 (int *,int *) ;
 int FUNC_10 (char*,int,char*,unsigned long long) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (char const*,int **,int ) ;
 int FUNC_13 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_14(const char *VAR_8, nvlist_t *VAR_9, nvlist_t *VAR_10)
{
 spa_t *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_12(VAR_8, &VAR_11, VAR_1);
 if (VAR_12 != 0)
  return (VAR_12);

 uint64_t VAR_13;
 if (FUNC_8(VAR_9, VAR_6,
     &VAR_13) != 0) {
  FUNC_11(VAR_11, VAR_1);
  return (FUNC_0(VAR_0));
 }
 if (!(VAR_13 == VAR_3 ||
     VAR_13 == VAR_4 ||
     VAR_13 == VAR_5)) {
  FUNC_11(VAR_11, VAR_1);
  return (FUNC_0(VAR_0));
 }

 nvlist_t *VAR_14;
 if (FUNC_7(VAR_9, VAR_7,
     &VAR_14) != 0) {
  FUNC_11(VAR_11, VAR_1);
  return (FUNC_0(VAR_0));
 }

 nvlist_t *VAR_15 = FUNC_3();
 int VAR_16 = 0;

 for (nvpair_t *VAR_17 = FUNC_9(VAR_14, ((void*)0));
     VAR_17 != ((void*)0); VAR_17 = FUNC_9(VAR_14, VAR_17)) {
  uint64_t VAR_18 = FUNC_6(VAR_17);

  VAR_12 = FUNC_13(VAR_11, VAR_18, VAR_13);
  if (VAR_12 != 0) {
   char VAR_19[VAR_2];

   (void) FUNC_10(VAR_19, sizeof (VAR_19),
       "%llu", (unsigned long long)VAR_18);
   FUNC_1(VAR_15, VAR_19, VAR_12);
   VAR_16++;
  }
 }
 if (FUNC_5(VAR_15) > 0) {
  FUNC_2(VAR_10, VAR_7,
      VAR_15);
 }
 FUNC_4(VAR_15);

 FUNC_11(VAR_11, VAR_1);
 return (VAR_16 > 0 ? VAR_0 : 0);
}
