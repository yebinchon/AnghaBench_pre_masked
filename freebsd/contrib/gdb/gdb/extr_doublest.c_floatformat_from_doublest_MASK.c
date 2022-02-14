
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct floatformat {int dummy; } ;
typedef float DOUBLEST ;


 int FUNC_0 (struct floatformat const*,float const*,void*) ;
 int FUNC_1 (int ) ;
 struct floatformat const* VAR_0 ;
 struct floatformat const* VAR_1 ;
 struct floatformat const* VAR_2 ;
 int FUNC_2 (void*,...) ;

void
FUNC_3 (const struct floatformat *VAR_3,
      const DOUBLEST *VAR_4, void *VAR_5)
{
  FUNC_1 (VAR_3 != ((void*)0));
  if (VAR_3 == VAR_1)
    {
      float VAR_6 = *VAR_4;
      FUNC_2 (VAR_5, &VAR_6, sizeof (VAR_6));
    }
  else if (VAR_3 == VAR_0)
    {
      double VAR_7 = *VAR_4;
      FUNC_2 (VAR_5, &VAR_7, sizeof (VAR_7));
    }
  else if (VAR_3 == VAR_2)
    {
      long double VAR_8 = *VAR_4;
      FUNC_2 (VAR_5, &VAR_8, sizeof (VAR_8));
    }
  else
    FUNC_0 (VAR_3, VAR_4, VAR_5);
}
