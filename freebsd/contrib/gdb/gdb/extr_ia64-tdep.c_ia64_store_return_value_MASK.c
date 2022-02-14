
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct regcache {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void const*,struct type*,char*,int ) ;
 int FUNC_2 (struct regcache*,int ,void const*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4 (struct type *VAR_5, struct regcache *VAR_6, const void *VAR_7)
{
  if (FUNC_0 (VAR_5) == VAR_3)
    {
      char VAR_8[VAR_2];
      FUNC_1 (VAR_7, VAR_5, VAR_8, VAR_4);
      FUNC_2 (VAR_6, VAR_0, (void *)VAR_8);
      FUNC_3 (VAR_0);
    }
  else
    FUNC_2 (VAR_6, VAR_1, VAR_7);
}
