
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct gdbarch {int dummy; } ;
typedef int CORE_ADDR ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct gdbarch*) ;
 int FUNC_2 (struct gdbarch*,int ,int ,int,struct value**,int,struct type*,int *,int *) ;
 scalar_t__ FUNC_3 (struct gdbarch*) ;
 int FUNC_4 (struct gdbarch*,int ,int ,int,struct value**,int,struct type*,int *,int *) ;
 int FUNC_5 (struct gdbarch*,int ,int ,int,struct value**,int,struct type*,int *,int *) ;

__attribute__((used)) static CORE_ADDR
FUNC_6 (struct gdbarch *VAR_0,
   CORE_ADDR VAR_1, CORE_ADDR VAR_2, int VAR_3,
   struct value **VAR_4, int VAR_5,
   struct type *VAR_6,
   CORE_ADDR *VAR_7, CORE_ADDR *VAR_8)
{
  if (FUNC_3 (VAR_0))
    return FUNC_2 (VAR_0, VAR_1, VAR_2, VAR_3,
        VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
  else if (FUNC_0 ()
    && !FUNC_1 (VAR_0))
    return FUNC_5 (VAR_0, VAR_1, VAR_2, VAR_3,
       VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
  else
    return FUNC_4 (VAR_0, VAR_1, VAR_2, VAR_3,
        VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
