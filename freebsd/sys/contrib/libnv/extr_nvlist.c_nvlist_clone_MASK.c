
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int nvpair_t ;
struct TYPE_10__ {scalar_t__ nvl_error; int nvl_flags; } ;
typedef TYPE_1__ nvlist_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (TYPE_1__ const*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int * FUNC_6 (TYPE_1__ const*,int *) ;
 int * FUNC_7 (int *) ;

nvlist_t *
FUNC_8(const nvlist_t *VAR_1)
{
 nvlist_t *VAR_2;
 nvpair_t *VAR_3, *VAR_4;

 FUNC_1(VAR_1);

 if (VAR_1->nvl_error != 0) {
  FUNC_0(VAR_1->nvl_error);
  return (((void*)0));
 }

 VAR_2 = FUNC_2(VAR_1->nvl_flags & VAR_0);
 for (VAR_3 = FUNC_4(VAR_1); VAR_3 != ((void*)0);
     VAR_3 = FUNC_6(VAR_1, VAR_3)) {
  VAR_4 = FUNC_7(VAR_3);
  if (VAR_4 == ((void*)0))
   break;
  (void)FUNC_5(VAR_2, VAR_4);
 }
 if (VAR_3 != ((void*)0)) {
  FUNC_3(VAR_2);
  return (((void*)0));
 }
 return (VAR_2);
}
