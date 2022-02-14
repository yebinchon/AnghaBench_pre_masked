
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef size_t uint_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,int ,int ***,size_t*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ,int *,int *,int ) ;

__attribute__((used)) static int
FUNC_4(zpool_handle_t *VAR_5, nvlist_t *VAR_6, int VAR_7, int VAR_8)
{
 char *VAR_9 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_0);
 nvlist_t **VAR_10;
 uint_t VAR_11, VAR_12;
 int VAR_13;

 if (FUNC_2(VAR_9) + VAR_7 > VAR_8)
  VAR_8 = FUNC_2(VAR_9) + VAR_7;

 FUNC_0(VAR_9);

 if (FUNC_1(VAR_6, VAR_3,
     &VAR_10, &VAR_12) == 0) {
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
   if ((VAR_13 = FUNC_4(VAR_5, VAR_10[VAR_11], VAR_7 + 2,
       VAR_8)) > VAR_8)
    VAR_8 = VAR_13;
 }

 if (FUNC_1(VAR_6, VAR_2,
     &VAR_10, &VAR_12) == 0) {
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
   if ((VAR_13 = FUNC_4(VAR_5, VAR_10[VAR_11], VAR_7 + 2,
       VAR_8)) > VAR_8)
    VAR_8 = VAR_13;
 }

 if (FUNC_1(VAR_6, VAR_1,
     &VAR_10, &VAR_12) == 0) {
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
   if ((VAR_13 = FUNC_4(VAR_5, VAR_10[VAR_11], VAR_7 + 2,
       VAR_8)) > VAR_8)
    VAR_8 = VAR_13;
 }


 return (VAR_8);
}
