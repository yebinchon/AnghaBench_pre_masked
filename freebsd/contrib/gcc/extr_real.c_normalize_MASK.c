
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {unsigned long* sig; int sign; int cl; scalar_t__ decimal; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5 (REAL_VALUE_TYPE *VAR_4)
{
  int VAR_5 = 0, VAR_6;
  int VAR_7, VAR_8;

  if (VAR_4->decimal)
    return;


  for (VAR_7 = VAR_2 - 1; VAR_7 >= 0; VAR_7--)
    if (VAR_4->sig[VAR_7] == 0)
      VAR_5 += VAR_0;
    else
      break;


  if (VAR_7 < 0)
    {
      VAR_4->cl = VAR_3;
      FUNC_1 (VAR_4, 0);
      return;
    }


  for (VAR_8 = 0; ; VAR_8++)
    if (VAR_4->sig[VAR_7] & ((unsigned long)1 << (VAR_0 - 1 - VAR_8)))
      break;
  VAR_5 += VAR_8;

  if (VAR_5 > 0)
    {
      VAR_6 = FUNC_0 (VAR_4) - VAR_5;
      if (VAR_6 > VAR_1)
 FUNC_2 (VAR_4, VAR_4->sign);
      else if (VAR_6 < -VAR_1)
 FUNC_3 (VAR_4, VAR_4->sign);
      else
 {
   FUNC_1 (VAR_4, VAR_6);
   FUNC_4 (VAR_4, VAR_4, VAR_5);
 }
    }
}
