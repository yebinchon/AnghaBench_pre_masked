
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct consdev {int cn_name; int cn_pri; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(struct consdev *VAR_2)
{

 if (!FUNC_1())
  return;

 VAR_2->cn_pri = VAR_0;
 FUNC_0(VAR_2->cn_name, "%s0", VAR_1);
}
