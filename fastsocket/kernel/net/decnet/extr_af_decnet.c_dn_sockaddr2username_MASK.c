
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_dn {int sdn_objnamel; int sdn_objname; int sdn_objnum; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*,int ,void*) ;
 int FUNC_2 (unsigned char*,int ,int) ;

int FUNC_3(struct sockaddr_dn *VAR_0, unsigned char *VAR_1, unsigned char VAR_2)
{
 int VAR_3 = 2;

 *VAR_1++ = VAR_2;

 switch(VAR_2) {
  case 0:
   *VAR_1++ = VAR_0->sdn_objnum;
   break;
  case 1:
   *VAR_1++ = 0;
   *VAR_1++ = FUNC_0(VAR_0->sdn_objnamel);
   FUNC_1(VAR_1, VAR_0->sdn_objname, FUNC_0(VAR_0->sdn_objnamel));
   VAR_3 = 3 + FUNC_0(VAR_0->sdn_objnamel);
   break;
  case 2:
   FUNC_2(VAR_1, 0, 5);
   VAR_1 += 5;
   *VAR_1++ = FUNC_0(VAR_0->sdn_objnamel);
   FUNC_1(VAR_1, VAR_0->sdn_objname, FUNC_0(VAR_0->sdn_objnamel));
   VAR_3 = 7 + FUNC_0(VAR_0->sdn_objnamel);
   break;
 }

 return VAR_3;
}
