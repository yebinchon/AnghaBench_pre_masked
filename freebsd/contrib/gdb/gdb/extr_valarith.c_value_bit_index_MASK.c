
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
typedef int LONGEST ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 struct type* FUNC_0 (struct type*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct type*,int*,int*) ;
 int FUNC_2 (int ,char*) ;

int
FUNC_3 (struct type *VAR_3, char *VAR_4, int VAR_5)
{
  LONGEST VAR_6, VAR_7;
  LONGEST VAR_8;
  unsigned VAR_9;
  struct type *VAR_10 = FUNC_0 (VAR_3, 0);
  if (FUNC_1 (VAR_10, &VAR_6, &VAR_7) < 0)
    return -2;
  if (VAR_5 < VAR_6 || VAR_5 > VAR_7)
    return -1;
  VAR_9 = VAR_5 - VAR_6;
  VAR_8 = FUNC_2 (VAR_2,
        VAR_4 + (VAR_9 / VAR_1));
  VAR_9 %= VAR_1;
  if (VAR_0)
    VAR_9 = VAR_1 - 1 - VAR_9;
  return (VAR_8 >> VAR_9) & 1;
}
