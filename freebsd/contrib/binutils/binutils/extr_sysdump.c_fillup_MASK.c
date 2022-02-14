
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned char*,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned char*,int,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int
FUNC_4 (unsigned char *VAR_3)
{
  int VAR_4;
  int VAR_5;
  int VAR_6;

  VAR_4 = FUNC_2 (VAR_2) - 2;
  FUNC_1 (VAR_3, 1, VAR_4, VAR_2);
  VAR_5 = VAR_0 + VAR_4 + 2;

  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
    VAR_5 += VAR_3[VAR_6];

  if ((VAR_5 & 0xff) != 0xff)
    FUNC_3 ("SUM IS %x\n", VAR_5);

  if (VAR_1)
    FUNC_0 (VAR_3, VAR_4);

  return VAR_4 - 1;
}
