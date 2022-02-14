
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct floatformat {int dummy; } ;
typedef int DOUBLEST ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct floatformat const*,int *,void*) ;
 int FUNC_1 (int *,void const*,int *) ;

__attribute__((used)) static void
FUNC_2 (const struct floatformat *VAR_4, const void *VAR_5,
         void *VAR_6)
{
  DOUBLEST VAR_7;
  if (VAR_1 == VAR_0)
    FUNC_1 (&VAR_2, VAR_5, &VAR_7);
  else
    FUNC_1 (&VAR_3,
        VAR_5, &VAR_7);
  FUNC_0 (VAR_4, &VAR_7, VAR_6);
}
