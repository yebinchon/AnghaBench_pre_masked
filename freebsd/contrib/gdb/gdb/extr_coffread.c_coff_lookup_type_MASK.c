
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int FUNC_0 (struct type**,int ,int) ;
 struct type** VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,int) ;

__attribute__((used)) static struct type **
FUNC_2 (int VAR_2)
{
  if (VAR_2 >= VAR_1)
    {
      int VAR_3 = VAR_1;

      VAR_1 *= 2;
      if (VAR_2 >= VAR_1)
 VAR_1 = VAR_2 * 2;

      VAR_0 = (struct type **)
 FUNC_1 ((char *) VAR_0,
    VAR_1 * sizeof (struct type *));
      FUNC_0 (&VAR_0[VAR_3], 0,
  (VAR_1 - VAR_3) * sizeof (struct type *));
    }
  return &VAR_0[VAR_2];
}
