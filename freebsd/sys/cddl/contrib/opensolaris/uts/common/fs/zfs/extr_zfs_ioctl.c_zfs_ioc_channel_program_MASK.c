
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int *,int ,int *) ;
 scalar_t__ FUNC_1 (int *,int ,int **) ;
 scalar_t__ FUNC_2 (int *,int ,char**) ;
 scalar_t__ FUNC_3 (int *,int ,scalar_t__*) ;
 int FUNC_4 (char const*,char*,int ,scalar_t__,scalar_t__,int *,int *) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int
FUNC_5(const char *VAR_11, nvlist_t *VAR_12,
    nvlist_t *VAR_13)
{
 char *VAR_14;
 uint64_t VAR_15, VAR_16;
 boolean_t VAR_17;
 nvpair_t *VAR_18 = ((void*)0);

 if (0 != FUNC_2(VAR_12, VAR_5, &VAR_14)) {
  return (VAR_1);
 }
 if (0 != FUNC_0(VAR_12, VAR_6, &VAR_17)) {
  VAR_17 = VAR_0;
 }
 if (0 != FUNC_3(VAR_12, VAR_3, &VAR_15)) {
  VAR_15 = VAR_7;
 }
 if (0 != FUNC_3(VAR_12, VAR_4, &VAR_16)) {
  VAR_16 = VAR_8;
 }
 if (0 != FUNC_1(VAR_12, VAR_2, &VAR_18)) {
  return (VAR_1);
 }

 if (VAR_15 == 0 || VAR_15 > VAR_9)
  return (VAR_1);
 if (VAR_16 == 0 || VAR_16 > VAR_10)
  return (VAR_1);

 return (FUNC_4(VAR_11, VAR_14, VAR_17, VAR_15, VAR_16,
     VAR_18, VAR_13));
}
