
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef int uint_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,scalar_t__*,scalar_t__*) ;
 char* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int ,int **,int) ;
 scalar_t__ FUNC_4 (int **,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,scalar_t__,scalar_t__*,int ***,int*) ;

int
FUNC_8(zpool_handle_t *VAR_5, nvlist_t **VAR_6)
{
 char *VAR_7;
 uint64_t VAR_8 = VAR_1;
 uint64_t VAR_9 = 0;
 nvlist_t **VAR_10 = ((void*)0);
 uint_t VAR_11 = 0;
 int VAR_12, VAR_13;

 VAR_7 = FUNC_2(VAR_8);
 if (VAR_7 == ((void*)0))
  return (VAR_0);
 do {
  uint64_t VAR_14 = VAR_8;
  uint64_t VAR_15;

  if ((VAR_12 = FUNC_1(VAR_5, VAR_7, &VAR_9, &VAR_14)) != 0)
   break;


  if (VAR_14 == 0)
   break;

  if ((VAR_12 = FUNC_7(VAR_7, VAR_14,
      &VAR_15, &VAR_10, &VAR_11)) != 0)
   break;
  VAR_9 -= VAR_15;
  if (VAR_15 == VAR_14) {




   VAR_8 *= 2;
   FUNC_0(VAR_7);
   VAR_7 = ((void*)0);
   if ((VAR_8 >= VAR_2) ||
       ((VAR_7 = FUNC_2(VAR_8)) == ((void*)0))) {
    VAR_12 = VAR_0;
    break;
   }
  }


 } while (1);

 FUNC_0(VAR_7);

 if (!VAR_12) {
  FUNC_6(FUNC_4(VAR_6, VAR_3, 0) == 0);
  FUNC_6(FUNC_3(*VAR_6, VAR_4,
      VAR_10, VAR_11) == 0);
 }
 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++)
  FUNC_5(VAR_10[VAR_13]);
 FUNC_0(VAR_10);

 return (VAR_12);
}
