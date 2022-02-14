
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct floatformat {int dummy; } ;
typedef int DOUBLEST ;


 int VAR_0 ;
 struct floatformat* FUNC_0 (int) ;
 int FUNC_1 (struct floatformat const*,void const*,int *) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static DOUBLEST
FUNC_3 (const void *VAR_1, int VAR_2)
{
  const struct floatformat *VAR_3 = FUNC_0 (VAR_2);
  DOUBLEST VAR_4;

  if (VAR_3 == ((void*)0))
    {
      FUNC_2 ("Can't extract a floating-point number of %d bytes.", VAR_2);
      return VAR_0;
    }

  FUNC_1 (VAR_3, VAR_1, &VAR_4);
  return VAR_4;
}
