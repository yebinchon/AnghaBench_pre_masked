
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct regcache {int dummy; } ;
struct gdbarch {int (* push_dummy_call ) (struct gdbarch*,int ,struct regcache*,int ,int,struct value**,int ,int,int ) ;} ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct gdbarch*,int ,struct regcache*,int ,int,struct value**,int ,int,int ) ;

CORE_ADDR
FUNC_3 (struct gdbarch *VAR_2, CORE_ADDR VAR_3, struct regcache *VAR_4, CORE_ADDR VAR_5, int VAR_6, struct value **VAR_7, CORE_ADDR VAR_8, int VAR_9, CORE_ADDR VAR_10)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->push_dummy_call != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_push_dummy_call called\n");
  return VAR_2->push_dummy_call (VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
}
