
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int*) ;

 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int* VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  int VAR_20;
  VAR_16 = 0;
  VAR_15 = 0;
  VAR_19 = 0;
  VAR_17 = 0;
  while (1)
    {
      (void) FUNC_0 (VAR_18, VAR_13 + 1);
      VAR_20 = 0;
      switch (*VAR_13)
 {

 case 0x40:
 case 0x41:
 case 0x42:
 case 0x43:
 case 0x44:
 case 0x45:
 case 0x46:
 case 0x47:
 case 0x48:
 case 0x49:
 case 0x4a:
 case 0x4b:
 case 0x4c:
 case 0x4d:
 case 0x4e:
 case 0x4f:
     if (VAR_12 == VAR_14)
       VAR_20 = *VAR_13;
     else
       return;
   break;
 case 0xf3:
   VAR_15 |= VAR_10;
   break;
 case 0xf2:
   VAR_15 |= VAR_9;
   break;
 case 0xf0:
   VAR_15 |= VAR_8;
   break;
 case 0x2e:
   VAR_15 |= VAR_1;
   break;
 case 0x36:
   VAR_15 |= VAR_11;
   break;
 case 0x3e:
   VAR_15 |= VAR_3;
   break;
 case 0x26:
   VAR_15 |= VAR_4;
   break;
 case 0x64:
   VAR_15 |= VAR_5;
   break;
 case 0x65:
   VAR_15 |= VAR_7;
   break;
 case 0x66:
   VAR_15 |= VAR_2;
   break;
 case 0x67:
   VAR_15 |= VAR_0;
   break;
 case 128:



   if (VAR_15 || VAR_16)
     {
       VAR_15 |= VAR_6;
       VAR_13++;
       return;
     }
   VAR_15 = VAR_6;
   break;
 default:
   return;
 }

      if (VAR_16)
 {
   VAR_17 = VAR_16;
   return;
 }
      VAR_16 = VAR_20;
      VAR_13++;
    }
}
