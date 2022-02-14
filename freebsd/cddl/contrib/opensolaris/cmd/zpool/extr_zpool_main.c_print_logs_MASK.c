
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef size_t uint_t ;
typedef int uint64_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,int ,int ***,size_t*) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (char*,int *,int,int) ;
 int FUNC_5 (int *,char*,int *,int,int,int ) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int ,int *,int *,int ) ;

__attribute__((used)) static void
FUNC_8(zpool_handle_t *VAR_5, nvlist_t *VAR_6, int VAR_7, boolean_t VAR_8)
{
 uint_t VAR_9, VAR_10;
 nvlist_t **VAR_11;

 if (FUNC_2(VAR_6, VAR_2, &VAR_11,
     &VAR_10) != 0)
  return;

 (void) FUNC_6(FUNC_1("\tlogs\n"));

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  uint64_t VAR_12 = VAR_0;
  char *VAR_13;

  (void) FUNC_3(VAR_11[VAR_9], VAR_3,
      &VAR_12);
  if (!VAR_12)
   continue;
  VAR_13 = FUNC_7(VAR_4, VAR_5, VAR_11[VAR_9], VAR_1);
  if (VAR_8)
   FUNC_5(VAR_5, VAR_13, VAR_11[VAR_9], VAR_7,
       2, VAR_0);
  else
   FUNC_4(VAR_13, VAR_11[VAR_9], VAR_7, 2);
  FUNC_0(VAR_13);
 }
}
