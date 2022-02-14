
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct regcache {int dummy; } ;
typedef int bfd_byte ;


 int FUNC_0 (struct type*,int *) ;
 int FUNC_1 (struct type*) ;
 int * FUNC_2 (int ) ;
 struct regcache* VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,void const*,int ) ;

void
FUNC_5 (struct type *VAR_1, struct regcache *VAR_2,
      const void *VAR_3)
{
  bfd_byte *VAR_4 = FUNC_2 (FUNC_1 (VAR_1));
  FUNC_3 (VAR_2 == VAR_0);
  FUNC_4 (VAR_4, VAR_3, FUNC_1 (VAR_1));
  FUNC_0 (VAR_1, VAR_4);
}
