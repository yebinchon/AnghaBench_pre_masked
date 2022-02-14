
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int rs; scalar_t__ func; } ;
struct TYPE_7__ {scalar_t__ rt; } ;
struct TYPE_5__ {scalar_t__ op; } ;
struct TYPE_8__ {int word; TYPE_2__ RType; TYPE_3__ IType; TYPE_1__ JType; } ;
typedef TYPE_4__ InstFmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
int
FUNC_0(int VAR_4)
{
 InstFmt VAR_5;
 int VAR_6 = 0;

 VAR_5.word = VAR_4;
 switch ((int)VAR_5.JType.op) {
 case 131:
  switch ((int)VAR_5.RType.func) {
  case 143:
   VAR_6 = VAR_0;
   break;
  case 144:
  case 128:
   VAR_6 = VAR_1;
   break;
  }
  break;

 case 166:
  switch ((int)VAR_5.IType.rt) {
  case 153:
  case 150:
  case 161:
  case 158:
   VAR_6 = VAR_0;
   break;

  case 152:
  case 151:
  case 160:
  case 159:
   VAR_6 = VAR_1;
   break;
  }
  break;

 case 145:
  VAR_6 = VAR_1;
  break;

 case 146:
 case 163:
 case 162:
 case 149:
 case 148:
 case 155:
 case 154:
 case 157:
 case 156:
  VAR_6 = VAR_0;
  break;

 case 147:
  switch (VAR_5.RType.rs) {
  case 165:
  case 164:
   VAR_6 = VAR_0;
   break;
  }
  break;

 case 142:
 case 139:
 case 137:
 case 140:
 case 141:
 case 138:
 case 135:
 case 136:
  VAR_6 = VAR_2;
  break;

 case 134:
 case 132:
 case 130:
 case 133:
 case 129:
  VAR_6 = VAR_3;
  break;
 }
 return (VAR_6);
}
