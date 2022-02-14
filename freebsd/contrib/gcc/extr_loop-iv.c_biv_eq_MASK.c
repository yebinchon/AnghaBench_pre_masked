
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct biv_entry {scalar_t__ regno; } ;
typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_0, const void *VAR_1)
{
  return ((const struct biv_entry *) VAR_0)->regno == FUNC_0 ((rtx) VAR_1);
}
