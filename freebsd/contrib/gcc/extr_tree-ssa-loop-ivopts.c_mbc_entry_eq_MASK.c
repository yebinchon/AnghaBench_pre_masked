
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbc_entry {scalar_t__ mode; scalar_t__ cst; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const struct mbc_entry *VAR_2 = VAR_0;
  const struct mbc_entry *VAR_3 = VAR_1;

  return (VAR_2->mode == VAR_3->mode
   && VAR_2->cst == VAR_3->cst);
}
