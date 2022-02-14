
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * sig; int cl; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_2 (REAL_VALUE_TYPE *VAR_5, int VAR_6)
{
  FUNC_1 (VAR_5, 0, sizeof (*VAR_5));

  VAR_6++;
  if (VAR_6 > VAR_0)
    VAR_5->cl = VAR_3;
  else if (VAR_6 < -VAR_0)
    ;
  else
    {
      VAR_5->cl = VAR_4;
      FUNC_0 (VAR_5, VAR_6);
      VAR_5->sig[VAR_1-1] = VAR_2;
    }
}
