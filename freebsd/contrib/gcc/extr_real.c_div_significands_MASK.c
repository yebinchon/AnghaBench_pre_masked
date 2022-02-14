
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {unsigned long* sig; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (unsigned long*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,TYPE_1__ const*,int ) ;

__attribute__((used)) static inline bool
FUNC_5 (REAL_VALUE_TYPE *VAR_3, const REAL_VALUE_TYPE *VAR_4,
    const REAL_VALUE_TYPE *VAR_5)
{
  REAL_VALUE_TYPE VAR_6;
  int VAR_7, VAR_8 = VAR_0 - 1;
  unsigned long VAR_9, VAR_10;

  VAR_6 = *VAR_4;
  FUNC_2 (VAR_3->sig, 0, sizeof (VAR_3->sig));

  VAR_9 = 0;
  goto start;
  do
    {
      VAR_9 = VAR_6.sig[VAR_1-1] & VAR_2;
      FUNC_1 (&VAR_6, &VAR_6);
    start:
      if (VAR_9 || FUNC_0 (&VAR_6, VAR_5) >= 0)
 {
   FUNC_4 (&VAR_6, &VAR_6, VAR_5, 0);
   FUNC_3 (VAR_3, VAR_8);
 }
    }
  while (--VAR_8 >= 0);

  for (VAR_7 = 0, VAR_10 = 0; VAR_7 < VAR_1; VAR_7++)
    VAR_10 |= VAR_6.sig[VAR_7];

  return VAR_10 != 0;
}
