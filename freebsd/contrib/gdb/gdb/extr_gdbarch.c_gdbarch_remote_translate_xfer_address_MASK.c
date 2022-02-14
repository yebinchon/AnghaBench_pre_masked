
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {int dummy; } ;
struct gdbarch {int (* remote_translate_xfer_address ) (struct gdbarch*,struct regcache*,int ,int,int *,int*) ;} ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct gdbarch*,struct regcache*,int ,int,int *,int*) ;

void
FUNC_3 (struct gdbarch *VAR_2, struct regcache *VAR_3, CORE_ADDR VAR_4, int VAR_5, CORE_ADDR *VAR_6, int *VAR_7)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->remote_translate_xfer_address != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_remote_translate_xfer_address called\n");
  VAR_2->remote_translate_xfer_address (VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}
