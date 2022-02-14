
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 unsigned char* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;
 int FUNC_3 (char*,int) ;
 unsigned char* FUNC_4 (unsigned char,int*,int ) ;
 int FUNC_5 (unsigned char*,int) ;
 int VAR_1 ;

void
FUNC_6 (int VAR_2, unsigned char *VAR_3, int VAR_4)
{
  unsigned char *VAR_5;
  unsigned char *VAR_6;
  int VAR_7, VAR_8;
  int VAR_9;

  VAR_5 = FUNC_0 (4 + VAR_4);

  VAR_5[0] = VAR_0;
  VAR_5[1] = VAR_2 >> 8;
  VAR_5[2] = VAR_2 & 0xff;
  VAR_5[3] = VAR_4;
  FUNC_2 (VAR_5 + 4, VAR_3, VAR_4);

  FUNC_5 (VAR_5, 4 + VAR_4);
  VAR_6 = FUNC_4 (VAR_0, &VAR_9, VAR_1);

  if (VAR_9 < 3)
    FUNC_1 ("Truncated response packet from OCD device");

  VAR_8 = VAR_6[1];
  VAR_7 = VAR_6[2];

  if (VAR_7 != 0)
    FUNC_3 ("ocd_write_bdm_registers:", VAR_7);
}
