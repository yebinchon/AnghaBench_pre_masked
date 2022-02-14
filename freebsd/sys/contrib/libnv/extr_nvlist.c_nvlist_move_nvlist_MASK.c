
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int nvpair_t ;
struct TYPE_9__ {scalar_t__ nvl_error; } ;
typedef TYPE_1__ nvlist_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int * FUNC_6 (char const*,TYPE_1__*) ;

void
FUNC_7(nvlist_t *VAR_1, const char *VAR_2, nvlist_t *VAR_3)
{
 nvpair_t *VAR_4;

 if (FUNC_3(VAR_1) != 0) {
  if (VAR_3 != ((void*)0) && FUNC_4(VAR_3) != ((void*)0))
   FUNC_2(VAR_3);
  FUNC_1(FUNC_3(VAR_1));
  return;
 }

 VAR_4 = FUNC_6(VAR_2, VAR_3);
 if (VAR_4 == ((void*)0)) {
  VAR_1->nvl_error = FUNC_0(VAR_0);
  FUNC_1(VAR_1->nvl_error);
 } else {
  (void)FUNC_5(VAR_1, VAR_4);
 }
}
