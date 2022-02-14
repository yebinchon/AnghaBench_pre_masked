
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct null_args {int nulla_target; } ;
typedef int nargs ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct null_args*,int ,int) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (int ,char const*,int,struct null_args*,int) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_3, const char *VAR_4, int VAR_5)
{
 struct null_args VAR_6;

 if (FUNC_3(VAR_3, 0777) == -1) {
  if (VAR_2 != VAR_0)
   FUNC_1("null create %s", VAR_3);
 }
 if (FUNC_3(VAR_4, 0777) == -1) {
  if (VAR_2 != VAR_0)
   FUNC_1("null create %s", VAR_4);
 }
 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.nulla_target = FUNC_0(VAR_3);
 if (FUNC_4(VAR_1, VAR_4, VAR_5, &VAR_6, sizeof(VAR_6)) == -1)
  FUNC_1("could not mount nullfs");
}
