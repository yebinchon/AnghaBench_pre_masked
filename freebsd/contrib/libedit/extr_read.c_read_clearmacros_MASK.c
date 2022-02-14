
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macros {scalar_t__ level; scalar_t__ offset; int * macro; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct macros *VAR_0)
{
 while (VAR_0->level >= 0)
  FUNC_0(VAR_0->macro[VAR_0->level--]);
 VAR_0->offset = 0;
}
