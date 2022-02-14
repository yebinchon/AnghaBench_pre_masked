
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static char *
FUNC_2 (unsigned char *VAR_1, unsigned char *VAR_2, int VAR_3, int VAR_4)
{
  int VAR_5;
  unsigned char VAR_6;

  FUNC_1(VAR_4);

  for (VAR_5=0; VAR_5<VAR_3; VAR_5++)
    {
      VAR_6 = FUNC_0(*VAR_1++) << 4;
      VAR_6 |= FUNC_0(*VAR_1++);
      *VAR_2++ = VAR_6;
      if (VAR_0)
 return 0;
    }

  FUNC_1(0);

  return VAR_2;
}
