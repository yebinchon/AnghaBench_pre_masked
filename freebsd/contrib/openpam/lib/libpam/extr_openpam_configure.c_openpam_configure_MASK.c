
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ** chains; } ;
typedef TYPE_1__ pam_handle_t ;
typedef size_t pam_facility_t ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 char const* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int FUNC_3 (int **) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char const*,size_t) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char const*) ;

int
FUNC_7(pam_handle_t *VAR_9,
 const char *VAR_10)
{
 pam_facility_t VAR_11;
 int VAR_12;

 FUNC_0(VAR_10);
 if (!FUNC_6(VAR_10)) {
  FUNC_5(VAR_3, "invalid service name");
  FUNC_2(VAR_7);
 }
 if (FUNC_4(VAR_9, VAR_10, VAR_2) < 0) {
  if (VAR_8 != VAR_0)
   goto load_err;
 }
 for (VAR_11 = 0; VAR_11 < VAR_4; ++VAR_11) {
  if (VAR_9->chains[VAR_11] != ((void*)0))
   continue;
  if (FUNC_1(VAR_1)) {
   if (FUNC_4(VAR_9, VAR_5, VAR_11) < 0)
    goto load_err;
  }
 }
 FUNC_2(VAR_6);
load_err:
 VAR_12 = VAR_8;
 FUNC_3(VAR_9->chains);
 VAR_8 = VAR_12;
 FUNC_2(VAR_7);
}
