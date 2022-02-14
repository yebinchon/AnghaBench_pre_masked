
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct consdev {int cn_unit; int cn_name; } ;


 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_1(struct consdev *VAR_0, int VAR_1)
{

 VAR_0->cn_unit = VAR_1;
 FUNC_0(VAR_0->cn_name, "ttyd%d", VAR_1);
}
