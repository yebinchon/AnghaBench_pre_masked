
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,unsigned char,unsigned char) ;
 int FUNC_1 (int,unsigned char,unsigned char) ;
 int FUNC_2 (int,unsigned char,unsigned char,unsigned char) ;
 int FUNC_3 (int,unsigned char,unsigned char,unsigned char) ;
 int FUNC_4 (int,unsigned char,unsigned char) ;
 int FUNC_5 (int,unsigned char,unsigned char,unsigned char) ;
 int FUNC_6 (int,unsigned char,unsigned char,unsigned char) ;
 int FUNC_7 (int ) ;

void
FUNC_8(int VAR_0, unsigned char *VAR_1, int VAR_2)
{
 switch (VAR_1[0] & 0xf0)
   {
   case 0x90:
    if (VAR_1[2] != 0)
      {
       FUNC_7(FUNC_5(VAR_0, VAR_1[0] & 0x0f, VAR_1[1], VAR_1[2]));
       break;
      }
    VAR_1[2] = 64;

   case 0x80:
    FUNC_7(FUNC_6(VAR_0, VAR_1[0] & 0x0f, VAR_1[1], VAR_1[2]));
    break;

   case 0xA0:
    FUNC_7(FUNC_3(VAR_0, VAR_1[0] & 0x0f, VAR_1[1], VAR_1[2]));
    break;

   case 0xB0:
    FUNC_7(FUNC_2(VAR_0, VAR_1[0] & 0x0f,
        VAR_1[1], VAR_1[2]));
    break;

   case 0xC0:
    FUNC_7(FUNC_4(VAR_0, VAR_1[0] & 0x0f, VAR_1[1]));
    break;

   case 0xD0:
    FUNC_7(FUNC_1(VAR_0, VAR_1[0] & 0x0f, VAR_1[1]));
    break;

   case 0xE0:
    FUNC_7(FUNC_0(VAR_0, VAR_1[0] & 0x0f,
         (VAR_1[1] & 0x7f) | ((VAR_1[2] & 0x7f) << 7)));
    break;

   default:

    ;
   }
}
