
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct target_ops {int dummy; } ;
struct mem_attrib {int dummy; } ;
struct TYPE_2__ {int flags; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_3 (CORE_ADDR VAR_2, char *VAR_3, int VAR_4, int VAR_5,
       struct mem_attrib *VAR_6, struct target_ops *VAR_7)
{
  int VAR_8;

  if (VAR_5)
    {
      if (VAR_1->flags & VAR_0)
 VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_4);
      else
 VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4);
    }
  else
    {
      VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4);
    }

  return VAR_8;
}
