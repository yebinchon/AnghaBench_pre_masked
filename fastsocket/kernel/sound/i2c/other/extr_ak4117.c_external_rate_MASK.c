
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
__attribute__((used)) static unsigned int FUNC_0(unsigned char VAR_4)
{
 switch (VAR_4 & (VAR_0|VAR_1|VAR_2|VAR_3)) {
 case 132: return 32000;
 case 131: return 44100;
 case 130: return 48000;
 case 129: return 88200;
 case 128: return 96000;
 case 134: return 176400;
 case 133: return 192000;
 default: return 0;
 }
}
