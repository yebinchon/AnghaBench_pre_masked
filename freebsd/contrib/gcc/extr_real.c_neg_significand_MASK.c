
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long* sig; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_0 (REAL_VALUE_TYPE *VAR_1, const REAL_VALUE_TYPE *VAR_2)
{
  bool VAR_3 = 1;
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
    {
      unsigned long VAR_5, VAR_6 = VAR_2->sig[VAR_4];

      if (VAR_3)
 {
   if (VAR_6)
     {
       VAR_5 = -VAR_6;
       VAR_3 = 0;
     }
   else
     VAR_5 = VAR_6;
 }
      else
 VAR_5 = ~VAR_6;

      VAR_1->sig[VAR_4] = VAR_5;
    }
}
