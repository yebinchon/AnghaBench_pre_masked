
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int dummy; } ;
struct mem_attrib {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;

int
FUNC_2 (CORE_ADDR VAR_1, char *VAR_2, int VAR_3, int VAR_4,
     struct mem_attrib *VAR_5,
     struct target_ops *VAR_6)
{
  if (VAR_3 <= 0)
    return 0;

  if (VAR_4)
    VAR_0 = FUNC_1 (VAR_1, VAR_2, VAR_3);
  else
    VAR_0 = FUNC_0 (VAR_1, VAR_2, VAR_3);

  return VAR_0;
}
