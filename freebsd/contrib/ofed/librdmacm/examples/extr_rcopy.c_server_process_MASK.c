
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_hdr {int command; } ;





 int VAR_0 ;
 int FUNC_0 (int,struct msg_hdr*) ;
 int FUNC_1 (int,struct msg_hdr*,int ) ;
 int FUNC_2 (int,struct msg_hdr*) ;
 int FUNC_3 (int,struct msg_hdr*) ;
 int FUNC_4 (int,struct msg_hdr*) ;

__attribute__((used)) static void FUNC_5(int VAR_1)
{
 struct msg_hdr VAR_2;
 int VAR_3;

 do {
  VAR_3 = FUNC_0(VAR_1, &VAR_2);
  if (VAR_3 != sizeof VAR_2)
   break;

  switch (VAR_2.command) {
  case 129:
   VAR_3 = FUNC_3(VAR_1, &VAR_2);
   break;
  case 130:
   FUNC_2(VAR_1, &VAR_2);
   VAR_3 = 0;
   break;
  case 128:
   VAR_3 = FUNC_4(VAR_1, &VAR_2);
   break;
  default:
   FUNC_1(VAR_1, &VAR_2, VAR_0);
   VAR_3 = -1;
   break;
  }

 } while (!VAR_3);
}
