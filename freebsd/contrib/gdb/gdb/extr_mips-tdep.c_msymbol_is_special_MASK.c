
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minimal_symbol {int dummy; } ;


 scalar_t__ FUNC_0 (struct minimal_symbol*) ;

__attribute__((used)) static int
FUNC_1 (struct minimal_symbol *VAR_0)
{
  return (((long) FUNC_0 (VAR_0) & 0x80000000) != 0);
}
