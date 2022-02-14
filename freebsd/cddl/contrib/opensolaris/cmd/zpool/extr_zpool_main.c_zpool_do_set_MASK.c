
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* cb_propname; char* cb_value; int member_0; } ;
typedef TYPE_1__ set_cbdata_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char**,int ,int *,int ,TYPE_1__*) ;
 int FUNC_1 (int ,char*,...) ;
 char* FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (int ) ;

int
FUNC_5(int VAR_4, char **VAR_5)
{
 set_cbdata_t VAR_6 = { 0 };
 int VAR_7;

 if (VAR_4 > 1 && VAR_5[1][0] == '-') {
  (void) FUNC_1(VAR_3, FUNC_2("invalid option '%c'\n"),
      VAR_5[1][1]);
  FUNC_4(VAR_0);
 }

 if (VAR_4 < 2) {
  (void) FUNC_1(VAR_3, "%s", FUNC_2("missing property=value "
      "argument\n"));
  FUNC_4(VAR_0);
 }

 if (VAR_4 < 3) {
  (void) FUNC_1(VAR_3, "%s", FUNC_2("missing pool name\n"));
  FUNC_4(VAR_0);
 }

 if (VAR_4 > 3) {
  (void) FUNC_1(VAR_3, "%s", FUNC_2("too many pool names\n"));
  FUNC_4(VAR_0);
 }

 VAR_6.cb_propname = VAR_5[1];
 VAR_6.cb_value = FUNC_3(VAR_6.cb_propname, '=');
 if (VAR_6.cb_value == ((void*)0)) {
  (void) FUNC_1(VAR_3, "%s", FUNC_2("missing value in "
      "property=value argument\n"));
  FUNC_4(VAR_0);
 }

 *(VAR_6.cb_value) = '\0';
 VAR_6.cb_value++;

 VAR_7 = FUNC_0(VAR_4 - 2, VAR_5 + 2, VAR_1, ((void*)0),
     VAR_2, &VAR_6);

 return (VAR_7);
}
