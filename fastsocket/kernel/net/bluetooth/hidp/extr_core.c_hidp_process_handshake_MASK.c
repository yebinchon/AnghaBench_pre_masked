
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidp_session {int dummy; } ;


 int FUNC_0 (char*,struct hidp_session*,unsigned char) ;
 int const VAR_0 ;







 int const VAR_1 ;
 int const VAR_2 ;
 int FUNC_1 (struct hidp_session*,int const,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct hidp_session *VAR_3,
     unsigned char VAR_4)
{
 FUNC_0("session %p param 0x%02x", VAR_3, VAR_4);

 switch (VAR_4) {
 case 128:

  break;

 case 129:
 case 132:
 case 130:
 case 133:

  break;

 case 131:
  break;

 case 134:


  FUNC_1(VAR_3,
   VAR_2 | VAR_0, ((void*)0), 0);
  break;

 default:
  FUNC_1(VAR_3,
   VAR_1 | 133, ((void*)0), 0);
  break;
 }
}
