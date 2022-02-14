
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int nenv_err ;
typedef int nargv_err ;
typedef int env_err ;
typedef int argv_err ;
struct TYPE_2__ {int ps_nargvstr; char** ps_argvstr; char** ps_envstr; int ps_nenvstr; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,char const*,int) ;

int
FUNC_1(int VAR_2, char **VAR_3, char **VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;

 if (VAR_1->ps_nargvstr != VAR_2) {
  static const char VAR_7[] = "Wrong argc in ps_strings";
  FUNC_0(VAR_0, VAR_7, sizeof(VAR_7));
  VAR_5 = 1;
 }

 if (VAR_1->ps_argvstr != VAR_3) {
  static const char VAR_8[] = "Wrong argv in ps_strings";
  FUNC_0(VAR_0, VAR_8, sizeof(VAR_8));
  VAR_5 = 1;
 }

 if (VAR_1->ps_envstr != VAR_4) {
  static const char VAR_9[] = "Wrong env in ps_strings";
  FUNC_0(VAR_0, VAR_9, sizeof(VAR_9));
  VAR_5 = 1;
 }
 VAR_6 = 0;
 while (VAR_4[VAR_6])
  ++VAR_6;
 if (VAR_1->ps_nenvstr != VAR_6) {
  static const char VAR_10[] = "Wrong nenv in ps_strings";
  FUNC_0(VAR_0, VAR_10, sizeof(VAR_10));
  VAR_5 = 1;
 }

 return VAR_5;
}
