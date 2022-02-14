
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rdi_level; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (char*,int ,int ,int,...) ;

__attribute__((used)) static int
FUNC_1 (CORE_ADDR VAR_4, char *VAR_5)
{
  int VAR_6;
  if (VAR_3.rdi_level > 0)
    {
      FUNC_0 ("bwb-SWB",
  VAR_0,
  VAR_4,
  VAR_2 | VAR_1,
  VAR_5,
  &VAR_6);
    }
  else
    {
      FUNC_0 ("bwb-SB",
  VAR_0,
  VAR_4,
  VAR_2,
  &VAR_6);
    }
  return VAR_6;
}
