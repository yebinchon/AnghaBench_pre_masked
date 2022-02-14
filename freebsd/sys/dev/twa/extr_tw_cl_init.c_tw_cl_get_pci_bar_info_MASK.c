
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TW_INT32 ;
 int VAR_0 ;
 int VAR_1 ;

TW_INT32
FUNC_0(TW_INT32 VAR_2, TW_INT32 VAR_3,
 TW_INT32 *VAR_4, TW_INT32 *VAR_5, TW_INT32 *VAR_6)
{
 TW_INT32 VAR_7 = VAR_1;

 switch(VAR_2) {
 case 131:
  switch(VAR_3) {
  case 134:
   *VAR_4 = 0;
   *VAR_5 = 0;
   *VAR_6 = 4;
   break;

  case 133:
   *VAR_4 = 1;
   *VAR_5 = 0x4;
   *VAR_6 = 8;
   break;

  case 132:
   *VAR_4 = 2;
   *VAR_5 = 0xC;
   *VAR_6 = 8;
   break;
  }
  break;

 case 128:
 case 130:
 case 129:
  switch(VAR_3) {
  case 134:
   *VAR_4 = 2;
   *VAR_5 = 0x10;
   *VAR_6 = 4;
   break;

  case 133:
   *VAR_4 = 1;
   *VAR_5 = 0x8;
   *VAR_6 = 8;
   break;

  case 132:
   *VAR_4 = 0;
   *VAR_5 = 0;
   *VAR_6 = 8;
   break;
  }
  break;

 default:
  VAR_7 = VAR_0;
  break;
 }

 return(VAR_7);
}
