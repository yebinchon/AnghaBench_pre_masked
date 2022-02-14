
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;






 int VAR_2 ;







 int* VAR_3 ;
 int FUNC_1 (int,int,int,int,int) ;
 int FUNC_2 (char*,int,unsigned int) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_3(int VAR_5, unsigned int VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12 = 0;

 FUNC_0(FUNC_2("static int pas_mixer_set(int whichDev = %d, unsigned int level = %X)\n", VAR_5, VAR_6));

 VAR_7 = VAR_6 & 0x7f;
 VAR_8 = (VAR_6 & 0x7f00) >> 8;

 if (VAR_5 < VAR_2) {
  if ((1 << VAR_5) & VAR_4)
   VAR_12 = 0x20;
  else
   VAR_12 = 0x00;
 }

 switch (VAR_5)
   {
   case 128:
    VAR_3[VAR_5] = FUNC_1(VAR_8, VAR_7, 63, 0x01, 0);
    break;





   case 139:
    VAR_3[VAR_5] = FUNC_1(VAR_8, VAR_7, 12, 0x03, 0);
    break;
   case 129:
    VAR_3[VAR_5] = FUNC_1(VAR_8, VAR_7, 12, 0x04, 0);
    break;

   case 130:
    VAR_3[VAR_5] = FUNC_1(VAR_8, VAR_7, 31, 0x10 | 0x00, VAR_12);
    break;
   case 134:
    VAR_3[VAR_5] = FUNC_1(VAR_8, VAR_7, 31, 0x10 | 0x05, VAR_12);
    break;
   case 140:
    VAR_3[VAR_5] = FUNC_1(VAR_8, VAR_7, 31, 0x10 | 0x07, VAR_12);
    break;
   case 131:
    VAR_3[VAR_5] = FUNC_1(VAR_8, VAR_7, 31, 0x10 | 0x06, VAR_12);
    break;
   case 136:
    VAR_3[VAR_5] = FUNC_1(VAR_8, VAR_7, 31, 0x10 | 0x02, VAR_12);
    break;
   case 138:
    VAR_3[VAR_5] = FUNC_1(VAR_8, VAR_7, 31, 0x10 | 0x03, VAR_12);
    break;
   case 135:
    VAR_3[VAR_5] = FUNC_1(VAR_8, VAR_7, 31, 0x10 | 0x04, VAR_12);
    break;
   case 137:
    VAR_3[VAR_5] = FUNC_1(VAR_8, VAR_7, 31, 0x10 | 0x01,
        0x00);
    break;
   case 133:
    VAR_3[VAR_5] = FUNC_1(VAR_8, VAR_7, 15, 0x02, 0);
    break;


   case 132:
    VAR_9 = VAR_6 & VAR_1;

    VAR_10 = VAR_9 ^ VAR_4;
    VAR_4 = VAR_9;

    for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
     if (VAR_10 & (1 << VAR_11))
       {
        FUNC_3(VAR_11, VAR_3[VAR_11]);
       }
    return VAR_4;
    break;

   default:
    return -VAR_0;
   }

 return (VAR_3[VAR_5]);
}
