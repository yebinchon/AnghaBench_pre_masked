
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_dn {unsigned char sdn_objnum; void* sdn_objnamel; int sdn_objname; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,unsigned char*,int) ;
 int FUNC_3 (int ,int ,int ) ;

int FUNC_4(unsigned char *VAR_1, int VAR_2, struct sockaddr_dn *VAR_3, unsigned char *VAR_4)
{
 unsigned char VAR_5;
 int VAR_6 = VAR_2;
 int VAR_7 = 12;

 VAR_3->sdn_objnum = 0;
 VAR_3->sdn_objnamel = FUNC_0(0);
 FUNC_3(VAR_3->sdn_objname, 0, VAR_0);

 if (VAR_2 < 2)
  return -1;

 VAR_2 -= 2;
 *VAR_4 = *VAR_1++;
 VAR_5 = *VAR_1++;

 switch(*VAR_4) {
  case 0:
   VAR_3->sdn_objnum = VAR_5;
   return 2;
  case 1:
   VAR_7 = 16;
   break;
  case 2:
   VAR_2 -= 4;
   VAR_1 += 4;
   break;
  case 4:
   VAR_2 -= 8;
   VAR_1 += 8;
   break;
  default:
   return -1;
 }

 VAR_2 -= 1;

 if (VAR_2 < 0)
  return -1;

 VAR_3->sdn_objnamel = FUNC_0(*VAR_1++);
 VAR_2 -= FUNC_1(VAR_3->sdn_objnamel);

 if ((VAR_2 < 0) || (FUNC_1(VAR_3->sdn_objnamel) > VAR_7))
  return -1;

 FUNC_2(VAR_3->sdn_objname, VAR_1, FUNC_1(VAR_3->sdn_objnamel));

 return VAR_6 - VAR_2;
}
