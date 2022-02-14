
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 unsigned char* FUNC_2 (unsigned char,int*,int ) ;
 int FUNC_3 (unsigned char*,int) ;
 int VAR_1 ;

unsigned char *
FUNC_4 (int VAR_2, int VAR_3, int *VAR_4)
{
  unsigned char VAR_5[10];
  int VAR_6;
  unsigned char *VAR_7;
  unsigned char *VAR_8;
  int VAR_9, VAR_10;
  int VAR_11;

  VAR_5[0] = VAR_0;
  VAR_5[1] = VAR_2 >> 8;
  VAR_5[2] = VAR_2 & 0xff;
  VAR_5[3] = VAR_3 >> 8;
  VAR_5[4] = VAR_3 & 0xff;

  FUNC_3 (VAR_5, 5);
  VAR_7 = FUNC_2 (VAR_0, &VAR_11, VAR_1);

  VAR_10 = VAR_7[1];
  VAR_9 = VAR_7[2];

  if (VAR_9 != 0)
    FUNC_1 ("read_bdm_registers:", VAR_9);

  VAR_6 = VAR_7[3];
  if (VAR_6 == 0)
    VAR_6 = 256;

  if (VAR_6 > VAR_11 - 4
      || ((VAR_6 & 3) != 0))
    FUNC_0 ("Register block size bad:  %d", VAR_6);

  *VAR_4 = VAR_6;

  VAR_8 = VAR_7 + 4;

  return VAR_8;
}
