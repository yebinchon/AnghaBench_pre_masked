
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {unsigned long* sig; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*,TYPE_1__*,int ) ;

__attribute__((used)) static unsigned long
FUNC_6 (REAL_VALUE_TYPE *VAR_2, REAL_VALUE_TYPE *VAR_3)
{
  unsigned long VAR_4, VAR_5;
  int VAR_6 = FUNC_0 (VAR_2), VAR_7 = FUNC_0 (VAR_3);

  if (VAR_6 < VAR_7)
    return 0;

  VAR_4 = VAR_5 = 0;
  goto start;
  do
    {
      VAR_5 = VAR_2->sig[VAR_0-1] & VAR_1;
      VAR_4 <<= 1;
      FUNC_3 (VAR_2, VAR_2);
    start:
      if (VAR_5 || FUNC_2 (VAR_2, VAR_3) >= 0)
 {
   FUNC_5 (VAR_2, VAR_2, VAR_3, 0);
   VAR_4 |= 1;
 }
    }
  while (--VAR_6 >= VAR_7);

  FUNC_1 (VAR_2, VAR_7);
  FUNC_4 (VAR_2);

  return VAR_4;
}
