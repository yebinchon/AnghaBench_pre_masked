
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int nvpair_t ;
struct TYPE_5__ {scalar_t__ nvl_error; } ;
typedef TYPE_1__ nvlist_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int * FUNC_6 (char const*,int*,size_t) ;

void
FUNC_7(nvlist_t *VAR_1, const char *VAR_2, int *VAR_3,
    size_t VAR_4)
{
 nvpair_t *VAR_5;
 size_t VAR_6;

 if (FUNC_4(VAR_1) != 0) {
  if (VAR_3 != 0) {
   for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
    FUNC_2(VAR_3[VAR_6]);
   FUNC_3(VAR_3);
  }

  FUNC_1(FUNC_4(VAR_1));
  return;
 }

 VAR_5 = FUNC_6(VAR_2, VAR_3, VAR_4);
 if (VAR_5 == ((void*)0)) {
  VAR_1->nvl_error = FUNC_0(VAR_0);
  FUNC_1(VAR_1->nvl_error);
 } else {
  (void)FUNC_5(VAR_1, VAR_5);
 }
}
