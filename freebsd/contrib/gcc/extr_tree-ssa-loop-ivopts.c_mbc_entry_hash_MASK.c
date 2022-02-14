
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbc_entry {int cst; scalar_t__ mode; } ;
typedef int hashval_t ;



__attribute__((used)) static hashval_t
FUNC_0 (const void *VAR_0)
{
  const struct mbc_entry *VAR_1 = VAR_0;

  return 57 * (hashval_t) VAR_1->mode + (hashval_t) (VAR_1->cst % 877);
}
