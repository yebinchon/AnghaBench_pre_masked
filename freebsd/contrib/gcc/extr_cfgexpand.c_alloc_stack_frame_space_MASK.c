
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int decl; } ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_3 ;

__attribute__((used)) static HOST_WIDE_INT
FUNC_1 (HOST_WIDE_INT VAR_4, HOST_WIDE_INT VAR_5)
{
  HOST_WIDE_INT VAR_6, VAR_7;

  VAR_7 = VAR_2;
  if (VAR_0)
    {
      VAR_7 -= VAR_4 + VAR_3;
      VAR_7 &= -VAR_5;
      VAR_7 += VAR_3;
      VAR_6 = VAR_7;
    }
  else
    {
      VAR_7 -= VAR_3;
      VAR_7 += VAR_5 - 1;
      VAR_7 &= -VAR_5;
      VAR_7 += VAR_3;
      VAR_6 = VAR_7;
      VAR_7 += VAR_4;
    }
  VAR_2 = VAR_7;

  if (FUNC_0 (VAR_2, VAR_1->decl))
    VAR_2 = VAR_6 = 0;

  return VAR_6;
}
