
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef scalar_t__ uint_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,int *,int,int,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int ,int *,int *,int ) ;

__attribute__((used)) static void
FUNC_5(zpool_handle_t *VAR_3, nvlist_t **VAR_4, uint_t VAR_5,
    int VAR_6)
{
 uint_t VAR_7;
 char *VAR_8;

 if (VAR_5 == 0)
  return;

 (void) FUNC_3(FUNC_1("\tspares\n"));

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_8 = FUNC_4(VAR_2, VAR_3, VAR_4[VAR_7], VAR_0);
  FUNC_2(VAR_3, VAR_8, VAR_4[VAR_7],
      VAR_6, 2, VAR_1);
  FUNC_0(VAR_8);
 }
}
