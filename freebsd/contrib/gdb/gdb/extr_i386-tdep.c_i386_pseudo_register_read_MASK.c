
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {int dummy; } ;
struct gdbarch {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct gdbarch*,int) ;
 int FUNC_1 (struct regcache*,int) ;
 int FUNC_2 (void*,char*,int ) ;
 int FUNC_3 (struct regcache*,int,void*) ;
 int FUNC_4 (struct gdbarch*,int) ;

__attribute__((used)) static void
FUNC_5 (struct gdbarch *VAR_1, struct regcache *VAR_2,
      int VAR_3, void *VAR_4)
{
  if (FUNC_0 (VAR_1, VAR_3))
    {
      char VAR_5[VAR_0];
      int VAR_6 = FUNC_1 (VAR_2, VAR_3);


      FUNC_3 (VAR_2, VAR_6, VAR_5);
      FUNC_2 (VAR_4, VAR_5, FUNC_4 (VAR_1, VAR_3));
    }
  else
    FUNC_3 (VAR_2, VAR_3, VAR_4);
}
