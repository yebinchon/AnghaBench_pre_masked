
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bitmap ;


 scalar_t__ FUNC_0 (int ,int) ;

__attribute__((used)) static unsigned
FUNC_1 (int VAR_0[], unsigned VAR_1, bitmap VAR_2)
{
  unsigned VAR_3, VAR_4;

  for (VAR_3 = 0, VAR_4 = 0; VAR_3 < VAR_1; VAR_3++)
    if (FUNC_0 (VAR_2, VAR_0[VAR_3]))
      VAR_0[VAR_4++] = VAR_0[VAR_3];

  return VAR_4;
}
