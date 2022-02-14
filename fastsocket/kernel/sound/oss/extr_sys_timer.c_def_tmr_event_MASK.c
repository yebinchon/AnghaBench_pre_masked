
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;







 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (unsigned char*,int) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 () ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_3(int VAR_10, unsigned char *VAR_11)
{
 unsigned char VAR_12 = VAR_11[1];
 unsigned long VAR_13 = *(int *) &VAR_11[4];

 switch (VAR_12)
   {
   case 128:
    VAR_13 += VAR_5;
   case 129:
    if (VAR_13 > 0)
      {
       long VAR_14;

       if (VAR_13 <= VAR_3)
        return VAR_1;

       VAR_14 = VAR_13;
       VAR_4 = VAR_5 = VAR_14;

       return VAR_0;
      }
    break;

   case 132:
    FUNC_2();
    VAR_9 = 1;
    break;

   case 131:
    VAR_9 = 0;
    break;

   case 134:
    VAR_9 = 1;
    break;

   case 130:
    if (VAR_13)
      {
       if (VAR_13 < 8)
        VAR_13 = 8;
       if (VAR_13 > 360)
        VAR_13 = 360;
       VAR_8 = VAR_7;
       VAR_6 += FUNC_1(VAR_7);
       VAR_7 = 0;
       VAR_2 = VAR_13;
      }
    break;

   case 133:
    FUNC_0(VAR_11, 8);
    break;

   default:;
   }

 return VAR_1;
}
