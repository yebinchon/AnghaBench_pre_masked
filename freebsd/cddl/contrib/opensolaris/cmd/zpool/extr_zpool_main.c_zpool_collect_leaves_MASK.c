
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef scalar_t__ uint_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ***,scalar_t__*) ;
 char* FUNC_3 (int ,int *,int *,int ) ;

__attribute__((used)) static void
FUNC_4(zpool_handle_t *VAR_3, nvlist_t *VAR_4, nvlist_t *VAR_5)
{
 uint_t VAR_6 = 0;
 nvlist_t **VAR_7;
 uint_t VAR_8;

 (void) FUNC_2(VAR_4, VAR_1,
     &VAR_7, &VAR_6);

 if (VAR_6 == 0) {
  char *VAR_9 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_0);
  FUNC_0(VAR_5, VAR_9);
  FUNC_1(VAR_9);
  return;
 }

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  FUNC_4(VAR_3, VAR_7[VAR_8], VAR_5);
 }
}
