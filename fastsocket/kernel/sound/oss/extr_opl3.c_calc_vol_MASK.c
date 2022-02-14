
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;

__attribute__((used)) static void FUNC_0(unsigned char *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = (~*VAR_1 & 0x3f);

 if (VAR_3 > 127)
  VAR_3 = 127;
 VAR_2 = (VAR_2 * VAR_3) / 127;

 if (VAR_4)
  VAR_4 += VAR_0[VAR_2];

 if (VAR_4 > 0x3f)
  VAR_4 = 0x3f;
 if (VAR_4 < 0)
  VAR_4 = 0;

 *VAR_1 = (*VAR_1 & 0xc0) | (~VAR_4 & 0x3f);
}
