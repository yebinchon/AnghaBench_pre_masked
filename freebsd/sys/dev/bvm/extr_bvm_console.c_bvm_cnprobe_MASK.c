
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct consdev {int cn_pri; int cn_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,int ,char*,int*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(struct consdev *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = 0;
 VAR_4->cn_pri = VAR_1;
 FUNC_2(VAR_4->cn_name, "bvmcons");

 FUNC_1("bvmconsole", 0, "disabled", &VAR_5);
 if (!VAR_5) {
  if (FUNC_1("bvmconsole", 0, "port", &VAR_6) == 0)
   VAR_3 = VAR_6;

  if (FUNC_0(VAR_3) == VAR_0)
   VAR_4->cn_pri = VAR_2;
 }
}
