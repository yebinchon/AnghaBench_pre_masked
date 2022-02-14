
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct floatformat {int dummy; } ;
typedef int DOUBLEST ;


 scalar_t__ FUNC_0 (struct type const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct type const*) ;
 int FUNC_2 (struct floatformat const*,int *,void*) ;
 struct floatformat* FUNC_3 (struct type const*) ;
 int FUNC_4 (struct floatformat const*,void const*,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (void*,void const*,int ) ;
 int FUNC_7 (void*,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*) ;

void
FUNC_10 (const void *VAR_1, const struct type *VAR_2,
                        void *VAR_3, const struct type *VAR_4)
{
  const struct floatformat *VAR_5 = FUNC_3 (VAR_2);
  const struct floatformat *VAR_6 = FUNC_3 (VAR_4);

  FUNC_5 (FUNC_0 (VAR_2) == VAR_0);
  FUNC_5 (FUNC_0 (VAR_4) == VAR_0);

  if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
    {







      FUNC_9 ("Can't convert floating-point number to desired type.");
      FUNC_7 (VAR_3, 0, FUNC_1 (VAR_4));
    }
  else if (VAR_5 == VAR_6)
    {






      FUNC_7 (VAR_3, 0, FUNC_1 (VAR_4));
      FUNC_6 (VAR_3, VAR_1, FUNC_8 (FUNC_1 (VAR_2), FUNC_1 (VAR_4)));
    }
  else
    {




      DOUBLEST VAR_7;

      FUNC_4 (VAR_5, VAR_1, &VAR_7);
      FUNC_2 (VAR_6, &VAR_7, VAR_3);
    }
}
