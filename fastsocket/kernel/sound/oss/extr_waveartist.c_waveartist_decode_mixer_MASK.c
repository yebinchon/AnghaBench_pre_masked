
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* levels; } ;
typedef TYPE_1__ wavnc_info ;


 int VAR_0 ;
__attribute__((used)) static int
FUNC_0(wavnc_info *VAR_1, int VAR_2, unsigned char VAR_3,
   unsigned char VAR_4)
{
 switch (VAR_2) {
 case 128:
 case 129:
 case 130:
 case 134:
 case 131:
 case 136:
 case 133:
 case 132:
  VAR_1->levels[VAR_2] = VAR_3 | VAR_4 << 8;
  break;

 case 135:
  break;

 default:
  VAR_2 = -VAR_0;
  break;
 }

 return VAR_2;
}
