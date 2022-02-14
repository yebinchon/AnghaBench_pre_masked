
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cmdll; } ;
struct TYPE_4__ {TYPE_1__ setmem; } ;
typedef int CORE_ADDR ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_2 (CORE_ADDR VAR_1, char *VAR_2, int VAR_3)
{
  int VAR_4;
  VAR_4 = 0;


  if ((VAR_3 > 8) && (((VAR_3 & 0x07)) == 0) && VAR_0->setmem.cmdll)
    {
      return FUNC_1 (VAR_1, VAR_2, VAR_3);
    }

  VAR_4 = FUNC_0 (VAR_1, VAR_2, VAR_3);
  return VAR_4;
}
