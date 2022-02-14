
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oexport_args {int dummy; } ;
struct export_args {scalar_t__ ex_numsecflavors; } ;


 int FUNC_0 (struct oexport_args const*,struct export_args*,int) ;

void
FUNC_1(const struct oexport_args *VAR_0, struct export_args *VAR_1)
{

 FUNC_0(VAR_0, VAR_1, sizeof(*VAR_0));
 VAR_1->ex_numsecflavors = 0;
}
