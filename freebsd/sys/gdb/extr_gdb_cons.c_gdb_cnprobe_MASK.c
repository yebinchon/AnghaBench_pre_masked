
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct consdev {int cn_pri; int cn_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void
FUNC_1(struct consdev *VAR_1)
{
 FUNC_0(VAR_1->cn_name, "gdb");
 VAR_1->cn_pri = VAR_0;
}
