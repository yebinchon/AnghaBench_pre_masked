
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zpool_hdl; } ;
typedef TYPE_1__ zpool_handle_t ;
typedef size_t uint_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 char* FUNC_2 (int ,TYPE_1__*,int *,int ) ;

__attribute__((used)) static int
FUNC_3(zpool_handle_t *VAR_1, nvlist_t **VAR_2, uint_t VAR_3,
    nvlist_t **VAR_4, uint_t VAR_5)
{
 uint_t VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  uint_t VAR_7;
  char *VAR_8 = FUNC_2(VAR_1->zpool_hdl, VAR_1,
      VAR_2[VAR_6], VAR_0);

  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
   char *VAR_9 = FUNC_2(VAR_1->zpool_hdl, VAR_1,
       VAR_4[VAR_7], VAR_0);
   boolean_t VAR_10 = (FUNC_1(VAR_8, VAR_9) == 0);

   FUNC_0(VAR_9);
   if (VAR_10) {
    FUNC_0(VAR_8);
    return (VAR_6);
   }
  }

  FUNC_0(VAR_8);
 }

 return (-1);
}
