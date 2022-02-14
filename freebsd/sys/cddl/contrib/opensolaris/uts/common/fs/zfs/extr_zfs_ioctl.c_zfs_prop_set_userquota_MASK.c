
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfsvfs_t ;
typedef int zfs_userquota_prop_t ;
typedef int uint64_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *,int ,int **) ;
 char* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int **) ;
 scalar_t__ FUNC_6 (int *,int **,unsigned int*) ;
 char* FUNC_7 (char const*,char) ;
 int FUNC_8 (int *,int ,char const*,int ,int ) ;
 int FUNC_9 (char const*,int ,int **,int ) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int
FUNC_11(const char *VAR_5, nvpair_t *VAR_6)
{
 const char *VAR_7 = FUNC_3(VAR_6);
 uint64_t *VAR_8;
 unsigned int VAR_9;
 const char *VAR_10;
 char *VAR_11;
 zfs_userquota_prop_t VAR_12;
 uint64_t VAR_13;
 uint64_t VAR_14;
 zfsvfs_t *VAR_15;
 int VAR_16;

 if (FUNC_4(VAR_6) == VAR_1) {
  nvlist_t *VAR_17;
  FUNC_1(FUNC_5(VAR_6, &VAR_17) == 0);
  if (FUNC_2(VAR_17, VAR_4,
      &VAR_6) != 0)
   return (FUNC_0(VAR_2));
 }





 if ((VAR_11 = FUNC_7(VAR_7, '-')) == ((void*)0) ||
     FUNC_6(VAR_6, &VAR_8, &VAR_9) != 0 ||
     VAR_9 != 3)
  return (FUNC_0(VAR_2));

 VAR_10 = VAR_11 + 1;
 VAR_12 = VAR_8[0];
 VAR_13 = VAR_8[1];
 VAR_14 = VAR_8[2];

 VAR_16 = FUNC_9(VAR_5, VAR_3, &VAR_15, VAR_0);
 if (VAR_16 == 0) {
  VAR_16 = FUNC_8(VAR_15, VAR_12, VAR_10, VAR_13, VAR_14);
  FUNC_10(VAR_15, VAR_3);
 }

 return (VAR_16);
}
