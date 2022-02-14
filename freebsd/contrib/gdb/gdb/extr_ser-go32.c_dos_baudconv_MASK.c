
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (int,long) ;

__attribute__((used)) static int
FUNC_1 (int VAR_2)
{
  long VAR_3, VAR_4;

  if (VAR_2 <= 0)
    return -1;


  VAR_3 = (((VAR_0) * 2 / (VAR_2) + 1) / 2);
  if (VAR_3 <= 0)
    return -1;

  VAR_4 = (((1000 * VAR_0) * 2 / (VAR_3 * VAR_2) + 1) / 2) - 1000;
  if (VAR_4 < 0)
    VAR_4 = -VAR_4;
  if (VAR_4 > VAR_1)
    return -1;

  return VAR_3;
}
