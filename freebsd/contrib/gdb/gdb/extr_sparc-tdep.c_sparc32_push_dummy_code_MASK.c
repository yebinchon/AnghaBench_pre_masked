
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct gdbarch {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (struct type*) ;
 int FUNC_1 (char*,int,int) ;
 scalar_t__ FUNC_2 (struct type*,int) ;
 int FUNC_3 (scalar_t__,char*,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_4 (struct gdbarch *VAR_0, CORE_ADDR VAR_1,
    CORE_ADDR VAR_2, int VAR_3,
    struct value **VAR_4, int VAR_5,
    struct type *VAR_6,
    CORE_ADDR *VAR_7, CORE_ADDR *VAR_8)
{
  *VAR_8 = VAR_1 - 4;
  *VAR_7 = VAR_2;

  if (FUNC_2 (VAR_6, VAR_3))
    {
      char VAR_9[4];


      FUNC_1 (VAR_9, 4, FUNC_0 (VAR_6) & 0x1fff);
      FUNC_3 (VAR_1 - 8, VAR_9, 4);
      return VAR_1 - 8;
    }

  return VAR_1 - 4;
}
