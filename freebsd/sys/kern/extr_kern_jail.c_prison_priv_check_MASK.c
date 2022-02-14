
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucred {TYPE_1__* cr_prison; } ;
struct TYPE_2__ {int pr_flags; int pr_allow; int pr_enforce_statfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ucred*) ;

int
FUNC_1(struct ucred *VAR_8, int VAR_9)
{

 if (!FUNC_0(VAR_8))
  return (0);
 switch (VAR_9) {




 case 224:
 case 236:
 case 243:
 case 242:
 case 244:
 case 241:
 case 237:
 case 240:
 case 238:
 case 239:





 case 156:
 case 155:





 case 235:
 case 234:
 case 233:





 case 162:
 case 161:
 case 159:




 case 230:
 case 229:
 case 232:
 case 231:
 case 223:




 case 228:
 case 226:
 case 227:






 case 157:
 case 158:
 case 154:
 case 153:





 case 152:






 case 144:
 case 135:







 case 138:
 case 130:
 case 151:
 case 146:
 case 142:
 case 150:
 case 149:
 case 148:
 case 147:
 case 137:
 case 145:
 case 143:
 case 136:
 case 134:
 case 133:






 case 225:
  return (0);





 case 132:
  if (VAR_8->cr_prison->pr_allow & VAR_1)
   return (0);
  else
   return (VAR_0);





 case 141:
 case 131:
 case 140:
 case 139:
  if (VAR_8->cr_prison->pr_allow & VAR_3 &&
      VAR_8->cr_prison->pr_enforce_statfs < 2)
   return (0);
  else
   return (VAR_0);





 case 129:
 case 128:
  if (VAR_8->cr_prison->pr_allow & VAR_2)
   return (0);
  else
   return (VAR_0);




 case 199:
  if (VAR_8->cr_prison->pr_allow & VAR_6)
   return (0);
  else
   return (VAR_0);




 case 198:
  return (0);




 case 196:
  return (0);




 case 200:
  if (VAR_8->cr_prison->pr_allow & VAR_4)
   return (0);
  else
   return (VAR_0);






 case 206:
  return (0);




 case 160:
  return (0);





 case 222:
  if (VAR_8->cr_prison->pr_allow & VAR_5)
   return (0);
  return (VAR_0);

 default:





  return (VAR_0);
 }
}
