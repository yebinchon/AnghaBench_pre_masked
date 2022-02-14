
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int nvpair_t ;
struct TYPE_6__ {int nvl_flags; int nvl_head; int nvl_error; } ;
typedef TYPE_1__ nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int const*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ) ;
 int * FUNC_5 (int const*) ;
 int FUNC_6 (int *,int *,TYPE_1__*) ;
 int FUNC_7 (int const*) ;

void
FUNC_8(nvlist_t *VAR_3, const nvpair_t *VAR_4)
{
 nvpair_t *VAR_5;

 FUNC_2(VAR_4);

 if (FUNC_3(VAR_3) != 0) {
  FUNC_1(FUNC_3(VAR_3));
  return;
 }
 if ((VAR_3->nvl_flags & VAR_2) == 0) {
  if (FUNC_4(VAR_3, FUNC_7(VAR_4))) {
   VAR_3->nvl_error = VAR_0;
   FUNC_1(FUNC_3(VAR_3));
   return;
  }
 }

 VAR_5 = FUNC_5(VAR_4);
 if (VAR_5 == ((void*)0)) {
  VAR_3->nvl_error = FUNC_0(VAR_1);
  FUNC_1(FUNC_3(VAR_3));
  return;
 }

 FUNC_6(&VAR_3->nvl_head, VAR_5, VAR_3);
}
