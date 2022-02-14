
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;


 int FUNC_0 (struct ui_file*,char*,char) ;
 int FUNC_1 (char*,struct ui_file*) ;
 int FUNC_2 (char*,struct ui_file*) ;
 int FUNC_3 (unsigned char*,struct ui_file*) ;

__attribute__((used)) static void
FUNC_4 (unsigned char *VAR_0, struct ui_file *VAR_1)
{
  int VAR_2;
  int VAR_3;
  unsigned int VAR_4;
  unsigned long VAR_5[2];

  VAR_2 = VAR_0[9] & 0x80;
  VAR_3 = VAR_0[7] & 0x80;
  VAR_4 = (((VAR_0[9] & 0x7f) << 8) | VAR_0[8]);
  VAR_5[0] = ((VAR_0[3] << 24) | (VAR_0[2] << 16) | (VAR_0[1] << 8) | VAR_0[0]);
  VAR_5[1] = (((VAR_0[7] & 0x7f) << 24) | (VAR_0[6] << 16)
   | (VAR_0[5] << 8) | VAR_0[4]);

  if (VAR_4 == 0x7fff && VAR_3)
    {
      if (VAR_5[0] == 0x00000000 && VAR_5[1] == 0x00000000)

 FUNC_0 (VAR_1, " %cInf", (VAR_2 ? '-' : '+'));
      else if (VAR_2 && VAR_5[0] == 0x00000000 && VAR_5[1] == 0x40000000)

 FUNC_2 (" Real Indefinite (QNaN)", VAR_1);
      else if (VAR_5[1] & 0x40000000)

 FUNC_1 (" QNaN", VAR_1);
      else

 FUNC_1 (" SNaN", VAR_1);
    }
  else if (VAR_4 < 0x7fff && VAR_4 > 0x0000 && VAR_3)

    FUNC_3 (VAR_0, VAR_1);
  else if (VAR_4 == 0x0000)
    {

      FUNC_3 (VAR_0, VAR_1);

      if (VAR_3)

 FUNC_1 (" Pseudo-denormal", VAR_1);
      else if (VAR_5[0] || VAR_5[1])

 FUNC_1 (" Denormal", VAR_1);
    }
  else

    FUNC_1 (" Unsupported", VAR_1);
}
