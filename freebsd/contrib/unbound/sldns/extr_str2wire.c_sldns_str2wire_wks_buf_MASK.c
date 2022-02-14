
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int token ;
struct servent {scalar_t__ s_port; } ;
struct protoent {scalar_t__ p_proto; } ;
typedef int sldns_buffer ;
typedef int proto_str ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct protoent* FUNC_4 (char*) ;
 struct servent* FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int*,int ,int) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *,char*,char*,int) ;
 int FUNC_10 (int *,int*,int ) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,char*,int) ;
 int FUNC_15 (char const*) ;

int FUNC_16(const char* VAR_3, uint8_t* VAR_4, size_t* VAR_5)
{
 int VAR_6 = 1;
 int VAR_7 = 0;
 char VAR_8[50], VAR_9[50];
 sldns_buffer VAR_10;
 FUNC_10(&VAR_10, (uint8_t*)VAR_3, FUNC_15(VAR_3));
 VAR_9[0]=0;


 if(*VAR_5 < 1)
  return VAR_0;

 while(FUNC_9(&VAR_10, VAR_8, "\t\n ", sizeof(VAR_8)) > 0) {
  FUNC_6(VAR_8);
  if(!VAR_7) {
   struct protoent *VAR_11 = FUNC_4(VAR_8);
   VAR_7 = 1;
   if(VAR_11) VAR_4[0] = (uint8_t)VAR_11->p_proto;
   else if(FUNC_12(VAR_8, "tcp")==0) VAR_4[0]=6;
   else if(FUNC_12(VAR_8, "udp")==0) VAR_4[0]=17;
   else VAR_4[0] = (uint8_t)FUNC_1(VAR_8);
   (void)FUNC_14(VAR_9, VAR_8, sizeof(VAR_9));
  } else {
   int VAR_12;
   struct servent *VAR_13 = FUNC_5(VAR_8, VAR_9);
   if(VAR_13) VAR_12=(int)FUNC_8((uint16_t)VAR_13->s_port);
   else if(FUNC_12(VAR_8, "domain")==0) VAR_12=53;
   else {
    VAR_12 = FUNC_1(VAR_8);
    if(VAR_12 == 0 && FUNC_13(VAR_8, "0") != 0) {






     return FUNC_0(VAR_2,
      FUNC_11(&VAR_10));
    }
    if(VAR_12 < 0 || VAR_12 > 65535) {






     return FUNC_0(VAR_2,
      FUNC_11(&VAR_10));
    }
   }
   if(VAR_6 < 1+VAR_12/8+1) {

    if(*VAR_5 < 1+(size_t)VAR_12/8+1) {






     return FUNC_0(
     VAR_0,
     FUNC_11(&VAR_10));
    }
    FUNC_7(VAR_4+VAR_6, 0, 1+(size_t)VAR_12/8+1-VAR_6);
    VAR_6 = 1+VAR_12/8+1;
   }
   VAR_4[1+ VAR_12/8] |= (1 << (7 - VAR_12 % 8));
  }
 }
 *VAR_5 = (size_t)VAR_6;







 return VAR_1;
}
