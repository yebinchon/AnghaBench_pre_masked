
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol_cache {unsigned long addr; scalar_t__ offset; int symbol; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static unsigned long FUNC_1(struct symbol_cache *VAR_0)
{
 VAR_0->addr = (unsigned long)FUNC_0(VAR_0->symbol);
 if (VAR_0->addr)
  VAR_0->addr += VAR_0->offset;
 return VAR_0->addr;
}
