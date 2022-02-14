
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seg_descr {scalar_t__ stype; } ;


 scalar_t__ FUNC_0 (unsigned long,void*,int) ;

__attribute__((used)) static int
FUNC_1 (unsigned long VAR_0, int VAR_1, void *VAR_2)
{
  unsigned long VAR_3 = VAR_0 + VAR_1 * 8;

  if (FUNC_0 (VAR_3, VAR_2, 8))
    return (int)((struct seg_descr *)VAR_2)->stype;
  return -1;
}
