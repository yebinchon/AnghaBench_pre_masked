
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int hcb_p ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6 (hcb_p VAR_6)
{
 u_char VAR_7;
 int VAR_8;

 FUNC_2 (VAR_4, VAR_0);
 for (VAR_8 = 1000000 ; VAR_8 ; --VAR_8) {
  VAR_7 = FUNC_0 (VAR_4);
  if (VAR_7 & VAR_2) {
   FUNC_1 (VAR_5);
   continue;
  }
  if (VAR_7 & VAR_1) {
   FUNC_2 (VAR_4, 0);
   FUNC_0 (VAR_3);
   break;
  }
 }
 if (!VAR_8)
  FUNC_3("%s: unable to abort current chip operation.\n",
   FUNC_5(VAR_6));
 FUNC_4 (VAR_6);
}
