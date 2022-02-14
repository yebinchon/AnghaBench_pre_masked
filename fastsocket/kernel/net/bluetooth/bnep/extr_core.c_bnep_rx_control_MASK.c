
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bnep_session {int dummy; } ;
typedef int pkt ;



 int VAR_0 ;






 int FUNC_0 (struct bnep_session*,void*,int) ;
 int FUNC_1 (struct bnep_session*,void*,int) ;
 int FUNC_2 (struct bnep_session*,int*,int) ;

__attribute__((used)) static int FUNC_3(struct bnep_session *VAR_1, void *VAR_2, int VAR_3)
{
 u8 VAR_4 = *(u8 *)VAR_2;
 int VAR_5 = 0;

 VAR_2++; VAR_3--;

 switch (VAR_4) {
 case 134:
 case 129:
 case 128:
 case 131:
 case 133:

  break;

 case 130:
  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);
  break;

 case 132:
  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
  break;

 default: {
   u8 VAR_6[3];
   VAR_6[0] = VAR_0;
   VAR_6[1] = 134;
   VAR_6[2] = VAR_4;
   FUNC_2(VAR_1, VAR_6, sizeof(VAR_6));
  }
  break;
 }

 return VAR_5;
}
