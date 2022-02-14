
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {int dummy; } ;
struct gdbarch {int (* pseudo_register_write ) (struct gdbarch*,struct regcache*,int,void const*) ;} ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct gdbarch*,struct regcache*,int,void const*) ;

void
FUNC_3 (struct gdbarch *VAR_2, struct regcache *VAR_3, int VAR_4, const void *VAR_5)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->pseudo_register_write != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_pseudo_register_write called\n");
  VAR_2->pseudo_register_write (VAR_2, VAR_3, VAR_4, VAR_5);
}
