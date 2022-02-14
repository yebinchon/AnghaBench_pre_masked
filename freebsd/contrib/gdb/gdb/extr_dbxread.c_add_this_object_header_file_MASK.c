
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 scalar_t__ FUNC_0 (char*,int) ;

__attribute__((used)) static void
FUNC_1 (int VAR_3)
{
  if (VAR_1 == VAR_0)
    {
      VAR_0 *= 2;
      VAR_2
 = (int *) FUNC_0 ((char *) VAR_2,
         VAR_0 * sizeof (int));
    }

  VAR_2[VAR_1++] = VAR_3;
}
