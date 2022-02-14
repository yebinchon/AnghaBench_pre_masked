
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 struct type** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int) ;

__attribute__((used)) static void
FUNC_1 (struct type *VAR_3)
{
  if (VAR_2 == VAR_1)
    {
      VAR_1 *= 2;
      VAR_0 = (struct type **)
 FUNC_0 ((char *) VAR_0,
    VAR_1 * sizeof (struct type *));
    }
  VAR_0[VAR_2++] = VAR_3;
}
