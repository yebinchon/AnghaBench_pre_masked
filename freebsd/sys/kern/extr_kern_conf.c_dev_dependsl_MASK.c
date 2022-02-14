
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdev {int si_children; int si_flags; struct cdev* si_parent; } ;


 int FUNC_0 (int *,struct cdev*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct cdev *VAR_2, struct cdev *VAR_3)
{

 VAR_3->si_parent = VAR_2;
 VAR_3->si_flags |= VAR_0;
 FUNC_0(&VAR_2->si_children, VAR_3, VAR_1);
}
