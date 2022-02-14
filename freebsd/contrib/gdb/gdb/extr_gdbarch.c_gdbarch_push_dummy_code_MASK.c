
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct gdbarch {int (* push_dummy_code ) (struct gdbarch*,int ,int ,int,struct value**,int,struct type*,int *,int *) ;} ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct gdbarch*,int ,int ,int,struct value**,int,struct type*,int *,int *) ;

CORE_ADDR
FUNC_3 (struct gdbarch *VAR_2, CORE_ADDR VAR_3, CORE_ADDR VAR_4, int VAR_5, struct value **VAR_6, int VAR_7, struct type *VAR_8, CORE_ADDR *VAR_9, CORE_ADDR *VAR_10)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->push_dummy_code != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_push_dummy_code called\n");
  return VAR_2->push_dummy_code (VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
}
