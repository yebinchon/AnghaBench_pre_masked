
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct floatformat {int dummy; } ;
typedef int DOUBLEST ;


 int FUNC_0 (struct floatformat const*,int *,void*) ;
 struct floatformat* FUNC_1 (int) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void
FUNC_4 (void *VAR_0, int VAR_1, DOUBLEST VAR_2)
{
  const struct floatformat *VAR_3 = FUNC_1 (VAR_1);

  if (VAR_3 == ((void*)0))
    {
      FUNC_3 ("Can't store a floating-point number of %d bytes.", VAR_1);
      FUNC_2 (VAR_0, 0, VAR_1);
      return;
    }

  FUNC_0 (VAR_3, &VAR_2, VAR_0);
}
