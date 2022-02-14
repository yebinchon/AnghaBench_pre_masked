
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_ioctl_args {int cmd; } ;
struct ioctl_args {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_0 (struct thread*,struct ioctl_args*) ;

__attribute__((used)) static int
FUNC_1(struct thread *VAR_36, struct linux_ioctl_args *VAR_37)
{
 int VAR_38;

 VAR_38 = 0;
 switch (VAR_37->cmd) {
 case 162:
  VAR_37->cmd = VAR_1;
  break;
 case 161:
  VAR_37->cmd = VAR_2;
  break;
 case 160:
  VAR_37->cmd = VAR_3;
  break;
 case 159:
  VAR_37->cmd = VAR_4;
  break;
 case 158:
  VAR_37->cmd = VAR_5;
  break;
 case 157:
  VAR_37->cmd = VAR_6;
  break;
 case 156:
  VAR_37->cmd = VAR_7;
  break;
 case 155:
  VAR_37->cmd = VAR_8;
  break;
 case 154:
  VAR_37->cmd = VAR_9;
  break;
 case 153:
  VAR_37->cmd = VAR_10;
  break;
 case 151:
  VAR_37->cmd = VAR_12;
  break;
 case 150:
  VAR_37->cmd = VAR_13;
  break;
 case 149:
  VAR_37->cmd = VAR_14;
  break;
 case 148:
  VAR_37->cmd = VAR_15;
  break;
 case 147:
  VAR_37->cmd = VAR_16;
  break;
 case 146:
  VAR_37->cmd = VAR_17;
  break;
 case 144:
  VAR_37->cmd = VAR_19;
  break;
 case 143:
  VAR_37->cmd = VAR_20;
  break;
 case 142:
  VAR_37->cmd = VAR_21;
  break;
 case 141:
  VAR_37->cmd = VAR_22;
  break;
 case 139:
  VAR_37->cmd = VAR_24;
  break;
 case 138:
  VAR_37->cmd = VAR_25;
  break;
 case 137:
  VAR_37->cmd = VAR_26;
  break;
 case 136:
  VAR_37->cmd = VAR_27;
  break;
 case 135:
  VAR_37->cmd = VAR_28;
  break;
 case 134:
  VAR_37->cmd = VAR_29;
  break;
 case 133:
  VAR_37->cmd = VAR_30;
  break;
 case 132:
  VAR_37->cmd = VAR_31;
  break;
 case 131:
  VAR_37->cmd = VAR_32;
  break;
 case 130:
  VAR_37->cmd = VAR_33;
  break;
 case 129:
  VAR_37->cmd = VAR_34;
  break;
 case 128:
  VAR_37->cmd = VAR_35;
  break;
 case 152:
  VAR_37->cmd = VAR_11;
  break;
 case 145:
  VAR_37->cmd = VAR_18;
  break;
 case 140:
  VAR_37->cmd = VAR_23;
  break;
 default:
  VAR_38 = VAR_0;
 }
 if (VAR_38 != VAR_0)
  VAR_38 = FUNC_0(VAR_36, (struct ioctl_args *)VAR_37);
 return (VAR_38);
}
