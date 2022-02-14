
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparc_gregset {int dummy; } ;
struct regcache {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct regcache const*,int,void*) ;
 int VAR_1 ;
 int FUNC_2 (int *,struct regcache const*,int,void*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3 (const struct sparc_gregset *VAR_3,
        const struct regcache *VAR_4,
        int VAR_5, void *VAR_6)
{
  int VAR_7 = (FUNC_0 (VAR_0) == 32);

  if (VAR_7)
    FUNC_1 (&VAR_1, VAR_4, VAR_5, VAR_6);
  else
    FUNC_2 (&VAR_2, VAR_4, VAR_5, VAR_6);
}
