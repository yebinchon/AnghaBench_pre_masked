
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rdi_level; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*,int ,char*,...) ;

__attribute__((used)) static int
FUNC_1 (CORE_ADDR VAR_2, char *VAR_3)
{
  int VAR_4;
  if (VAR_1.rdi_level > 0)
    {
      FUNC_0 ("b-p-S-B",
  VAR_0,
  VAR_3, 4,
  &VAR_4);
    }
  else
    {
      FUNC_0 ("bw-S-B",
  VAR_0,
  VAR_2,
  &VAR_4);
    }
  return VAR_4;
}
