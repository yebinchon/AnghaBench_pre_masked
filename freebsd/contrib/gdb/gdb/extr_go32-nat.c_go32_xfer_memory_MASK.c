
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int dummy; } ;
struct mem_attrib {int dummy; } ;
typedef int CORE_ADDR ;


 scalar_t__ FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_2 (CORE_ADDR VAR_0, char *VAR_1, int VAR_2, int VAR_3,
    struct mem_attrib *VAR_4, struct target_ops *VAR_5)
{
  if (VAR_3)
    {
      if (FUNC_1 (VAR_0, VAR_1, VAR_2))
 {
   return 0;
 }
      else
 {
   return VAR_2;
 }
    }
  else
    {
      if (FUNC_0 (VAR_0, VAR_1, VAR_2))
 {
   return 0;
 }
      else
 {
   return VAR_2;
 }
    }
}
