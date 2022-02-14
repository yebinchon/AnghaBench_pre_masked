
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int **) ;
 scalar_t__ FUNC_3 (int *,int ,char**) ;
 scalar_t__ FUNC_4 (int *,int ,scalar_t__*) ;
 int FUNC_5 (int ***,scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_6 (char*,char const*) ;

__attribute__((used)) static void
FUNC_7(nvlist_t ***VAR_6, uint64_t *VAR_7, nvlist_t *VAR_8,
    const char *VAR_9, uint64_t* VAR_10)
{
 nvlist_t *VAR_11;
 uint64_t VAR_12;
 uint64_t VAR_13, VAR_14;
 uint64_t VAR_15, VAR_16, VAR_17;
 char *VAR_18;
 int VAR_19;

 if (FUNC_3(VAR_8, VAR_2, &VAR_18) != 0 ||
     FUNC_6(VAR_18, VAR_9) != 0)
  goto ignore;

 if (FUNC_4(VAR_8, VAR_1, &VAR_12) != 0)
  goto ignore;

 if (FUNC_4(VAR_8, VAR_4, &VAR_13) != 0)
  goto ignore;

 if (FUNC_2(VAR_8, VAR_5, &VAR_11) != 0)
  goto ignore;

 if (FUNC_4(VAR_11, VAR_0, &VAR_15) != 0)
  goto ignore;

 FUNC_0(FUNC_4(VAR_8, VAR_3, &VAR_16) == 0);

 if (*VAR_10 != 0) {
  if (VAR_12 != *VAR_10)
   goto ignore;
 } else
  *VAR_10 = VAR_12;

 FUNC_5(VAR_6, VAR_7, VAR_15);

 if ((*VAR_6)[VAR_15] != ((void*)0)) {
  FUNC_0(FUNC_4((*VAR_6)[VAR_15],
      VAR_3, &VAR_17) == 0);
  if (VAR_16 <= VAR_17)
   goto ignore;
  FUNC_1((*VAR_6)[VAR_15]);
 }

 (*VAR_6)[VAR_15] = VAR_8;
 return;

ignore:
 FUNC_1(VAR_8);
}
