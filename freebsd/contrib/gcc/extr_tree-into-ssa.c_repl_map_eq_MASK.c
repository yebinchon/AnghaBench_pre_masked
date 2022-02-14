
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repl_map_d {scalar_t__ name; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  return ((const struct repl_map_d *)VAR_0)->name
  == ((const struct repl_map_d *)VAR_1)->name;
}
