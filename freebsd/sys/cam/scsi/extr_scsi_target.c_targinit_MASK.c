
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cdev* FUNC_0 (int *,int ,int ,int ,int,char*) ;
 int FUNC_1 (struct cdev*,char*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(void)
{
 struct cdev *VAR_3;


 VAR_3 = FUNC_0(&VAR_2, 0, VAR_1, VAR_0, 0600, "targ");
 FUNC_1(VAR_3, "targ0");
}
