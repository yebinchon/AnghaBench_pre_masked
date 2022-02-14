
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {int dummy; } ;
struct gdbarch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct regcache*,int,char const*) ;

__attribute__((used)) static void
FUNC_2 (struct gdbarch *VAR_3,
          struct regcache *VAR_4,
          int VAR_5, const void *VAR_6)
{
  FUNC_0 (VAR_5 >= VAR_0 && VAR_5 <= VAR_1);

  VAR_5 = VAR_2 + 2 * (VAR_5 - VAR_0);
  FUNC_1 (VAR_4, VAR_5, VAR_6);
  FUNC_1 (VAR_4, VAR_5 + 1, ((const char *)VAR_6) + 4);
}
