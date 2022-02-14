
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,unsigned char*,int) ;

__attribute__((used)) static void
FUNC_3 (unsigned char *VAR_1, int VAR_2)
{
  unsigned char VAR_3;
  unsigned char VAR_4;
  unsigned char *VAR_5, *VAR_6;

  VAR_5 = FUNC_0 (VAR_2 + 1 + 1);
  VAR_6 = VAR_5;

  VAR_3 = 0;

  *VAR_6++ = 0x55;

  while (VAR_2-- > 0)
    {
      VAR_4 = *VAR_1++;

      VAR_3 += VAR_4;
      *VAR_6++ = VAR_4;
    }

  *VAR_6++ = -VAR_3;
  if (FUNC_2 (VAR_0, VAR_5, VAR_6 - VAR_5))
    FUNC_1 ("output_packet: write failed");
}
