
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zpool_handle_t ;
struct TYPE_2__ {int cb_unavail; scalar_t__ cb_first; } ;
typedef TYPE_1__ upgrade_cbdata_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int VAR_3 ;
 char* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(zpool_handle_t *VAR_4, void *VAR_5)
{
 upgrade_cbdata_t *VAR_6 = VAR_5;

 if (FUNC_4(VAR_4) == VAR_2) {
  if (VAR_6->cb_first) {
   (void) FUNC_0(VAR_3, "%s", FUNC_1("The following pools "
       "are unavailable and cannot be upgraded as this "
       "time.\n\n"));
   (void) FUNC_0(VAR_3, "%s", FUNC_1("POOL\n"));
   (void) FUNC_0(VAR_3, "%s", FUNC_1("------------\n"));
   VAR_6->cb_first = VAR_0;
  }
  (void) FUNC_2(FUNC_1("%s\n"), FUNC_3(VAR_4));
  VAR_6->cb_unavail = VAR_1;
 }
 return (0);
}
