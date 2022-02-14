
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
size_t
FUNC_0 (size_t VAR_0, size_t VAR_1, size_t VAR_2)
{
  size_t VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;


  if (!VAR_0)
    return VAR_1 ? VAR_1 : 8 * 1024;
  if (!VAR_1)
    return VAR_0;


  for (VAR_4 = VAR_0, VAR_5 = VAR_1; (VAR_7 = VAR_4 % VAR_5) != 0; VAR_4 = VAR_5, VAR_5 = VAR_7)
    continue;


  VAR_6 = VAR_0 / VAR_5;
  VAR_3 = VAR_6 * VAR_1;
  return VAR_3 <= VAR_2 && VAR_3 / VAR_1 == VAR_6 ? VAR_3 : VAR_0;
}
