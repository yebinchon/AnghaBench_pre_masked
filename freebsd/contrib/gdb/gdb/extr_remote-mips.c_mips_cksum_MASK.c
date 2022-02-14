
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_0 (const unsigned char *VAR_1, const unsigned char *VAR_2, int VAR_3)
{
  const unsigned char *VAR_4;
  int VAR_5;
  int VAR_6;

  VAR_6 = 0;


  VAR_5 = VAR_0 - 1;
  VAR_4 = VAR_1 + 1;
  while (VAR_5-- != 0)
    VAR_6 += *VAR_4++;

  VAR_5 = VAR_3;
  VAR_4 = VAR_2;
  while (VAR_5-- != 0)
    VAR_6 += *VAR_4++;

  return VAR_6;
}
