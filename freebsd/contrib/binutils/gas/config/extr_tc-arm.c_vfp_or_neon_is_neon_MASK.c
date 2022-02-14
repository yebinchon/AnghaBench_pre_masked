
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cond; int uncond_value; int instruction; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_3 (unsigned VAR_11)
{

  if (!VAR_10 && (VAR_11 & VAR_5))
    {
      if (VAR_9.cond != VAR_2)
        {
          FUNC_2 (FUNC_1(VAR_0));
          return VAR_3;
        }
      if (VAR_9.uncond_value != -1)
        VAR_9.instruction |= VAR_9.uncond_value << 28;
    }

  if ((VAR_11 & VAR_4)
      && !FUNC_0 (VAR_7, VAR_8))
    {
      FUNC_2 (FUNC_1(VAR_1));
      return VAR_3;
    }

  return VAR_6;
}
