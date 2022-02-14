
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int va_list ;
typedef int nvpair_t ;
struct TYPE_5__ {scalar_t__ nvl_error; } ;
typedef TYPE_1__ nvlist_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int * FUNC_4 (char const*,char const*,int ) ;

void
FUNC_5(nvlist_t *VAR_1, const char *VAR_2, const char *VAR_3,
    va_list VAR_4)
{
 nvpair_t *VAR_5;

 if (FUNC_2(VAR_1) != 0) {
  FUNC_1(FUNC_2(VAR_1));
  return;
 }

 VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_4);
 if (VAR_5 == ((void*)0)) {
  VAR_1->nvl_error = FUNC_0(VAR_0);
  FUNC_1(VAR_1->nvl_error);
 } else {
  (void)FUNC_3(VAR_1, VAR_5);
 }
}
