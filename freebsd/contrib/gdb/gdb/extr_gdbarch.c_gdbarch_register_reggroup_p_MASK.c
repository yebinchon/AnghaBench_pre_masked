
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reggroup {int dummy; } ;
struct gdbarch {int (* register_reggroup_p ) (struct gdbarch*,int,struct reggroup*) ;} ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct gdbarch*,int,struct reggroup*) ;

int
FUNC_3 (struct gdbarch *VAR_2, int VAR_3, struct reggroup *VAR_4)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->register_reggroup_p != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_register_reggroup_p called\n");
  return VAR_2->register_reggroup_p (VAR_2, VAR_3, VAR_4);
}
