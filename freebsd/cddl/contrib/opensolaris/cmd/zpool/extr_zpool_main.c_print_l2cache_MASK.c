
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef scalar_t__ uint_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,int *,int,int,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int ,int *,int *,int ) ;

__attribute__((used)) static void
FUNC_5(zpool_handle_t *VAR_2, nvlist_t **VAR_3, uint_t VAR_4,
    int VAR_5)
{
 uint_t VAR_6;
 char *VAR_7;

 if (VAR_4 == 0)
  return;

 (void) FUNC_3(FUNC_1("\tcache\n"));

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_3[VAR_6], VAR_0);
  FUNC_2(VAR_2, VAR_7, VAR_3[VAR_6],
      VAR_5, 2, VAR_0);
  FUNC_0(VAR_7);
 }
}
