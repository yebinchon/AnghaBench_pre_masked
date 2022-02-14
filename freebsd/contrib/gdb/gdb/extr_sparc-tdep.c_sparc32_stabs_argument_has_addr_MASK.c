
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct gdbarch {int dummy; } ;


 int FUNC_0 (struct type*) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ FUNC_2 (struct type*) ;

__attribute__((used)) static int
FUNC_3 (struct gdbarch *VAR_0, struct type *VAR_1)
{
  return (FUNC_2 (VAR_1)
   || (FUNC_1 (VAR_1) && FUNC_0 (VAR_1) == 16));
}
