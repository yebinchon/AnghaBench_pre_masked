
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 unsigned char* FUNC_2 (unsigned char,int*,int ) ;
 int FUNC_3 (unsigned char*,int) ;
 int VAR_3 ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static unsigned char *
FUNC_5 (int VAR_4, int *VAR_5, int *VAR_6)
{
  unsigned char VAR_7[100], *VAR_8;
  int VAR_9, VAR_10;
  char VAR_11[100];

  unsigned char VAR_12[100];
  int VAR_13;

  VAR_7[0] = VAR_4;
  FUNC_3 (VAR_7, 1);
  VAR_8 = FUNC_2 (*VAR_7, VAR_6, VAR_3);

  if (*VAR_6 < 3)
    FUNC_0 ("Truncated response packet from OCD device");

  VAR_9 = VAR_8[1];
  VAR_10 = VAR_8[2];

  if (VAR_10 != 0)
    {
      FUNC_4 (VAR_11, "ocd_do_command (0x%x):", VAR_4);
      FUNC_1 (VAR_11, VAR_10);
    }

  if (VAR_9 & VAR_1)
    FUNC_0 ("OCD device can't detect VCC at BDM interface.");
  else if (VAR_9 & VAR_0)
    FUNC_0 ("BDM cable appears to be disconnected.");

  *VAR_5 = VAR_9;

  VAR_12[0] = VAR_2;
  VAR_12[1] = 3;
  FUNC_3 (VAR_12, 2);
  FUNC_2 (VAR_12[0], &VAR_13, VAR_3);

  VAR_12[0] = VAR_2;
  VAR_12[1] = 2;
  FUNC_3 (VAR_12, 2);
  FUNC_2 (VAR_12[0], &VAR_13, VAR_3);

  return VAR_8 + 3;
}
