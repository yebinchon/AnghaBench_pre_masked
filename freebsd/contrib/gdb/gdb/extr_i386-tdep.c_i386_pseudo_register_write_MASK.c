
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {int dummy; } ;
struct gdbarch {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct gdbarch*,int) ;
 int FUNC_1 (struct regcache*,int) ;
 int FUNC_2 (char*,void const*,int ) ;
 int FUNC_3 (struct regcache*,int,char*) ;
 int FUNC_4 (struct regcache*,int,void const*) ;
 int FUNC_5 (struct gdbarch*,int) ;

__attribute__((used)) static void
FUNC_6 (struct gdbarch *VAR_1, struct regcache *VAR_2,
       int VAR_3, const void *VAR_4)
{
  if (FUNC_0 (VAR_1, VAR_3))
    {
      char VAR_5[VAR_0];
      int VAR_6 = FUNC_1 (VAR_2, VAR_3);


      FUNC_3 (VAR_2, VAR_6, VAR_5);

      FUNC_2 (VAR_5, VAR_4, FUNC_5 (VAR_1, VAR_3));

      FUNC_4 (VAR_2, VAR_6, VAR_5);
    }
  else
    FUNC_4 (VAR_2, VAR_3, VAR_4);
}
