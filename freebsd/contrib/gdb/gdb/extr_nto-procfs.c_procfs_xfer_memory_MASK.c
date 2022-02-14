
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int dummy; } ;
struct mem_attrib {int dummy; } ;
typedef scalar_t__ off_t ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_3 (CORE_ADDR VAR_2, char *VAR_3, int VAR_4, int VAR_5,
      struct mem_attrib *VAR_6, struct target_ops *VAR_7)
{
  int VAR_8 = 0;

  if (FUNC_0 (VAR_1, (off_t) VAR_2, VAR_0) == (off_t) VAR_2)
    {
      if (VAR_5)
 VAR_8 = FUNC_2 (VAR_1, VAR_3, VAR_4);
      else
 VAR_8 = FUNC_1 (VAR_1, VAR_3, VAR_4);
      if (VAR_8 < 0)
 VAR_8 = 0;
    }
  return (VAR_8);
}
