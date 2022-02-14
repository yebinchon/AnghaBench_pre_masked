
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_print_args {int a_vp; } ;
struct denode {TYPE_1__* de_pmp; int de_diroffset; int de_dirclust; int de_StartCluster; } ;
struct TYPE_2__ {int pm_dev; } ;


 struct denode* FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_3(struct vop_print_args *VAR_0)
{
 struct denode *VAR_1 = FUNC_0(VAR_0->a_vp);

 FUNC_2("\tstartcluster %lu, dircluster %lu, diroffset %lu, ",
        VAR_1->de_StartCluster, VAR_1->de_dirclust, VAR_1->de_diroffset);
 FUNC_2("on dev %s\n", FUNC_1(VAR_1->de_pmp->pm_dev));
 return (0);
}
