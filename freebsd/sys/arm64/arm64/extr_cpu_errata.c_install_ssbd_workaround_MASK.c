
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int (*) (int)) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;



 int VAR_2 ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static void
FUNC_6(void)
{
 char *VAR_5;

 if (FUNC_0(VAR_2) == 0) {
  VAR_5 = FUNC_2("kern.cfg.ssbd");
  if (VAR_5 != ((void*)0)) {
   if (FUNC_5(VAR_5, "force-on") == 0) {
    VAR_4 = 129;
   } else if (FUNC_5(VAR_5, "force-off") == 0) {
    VAR_4 = 130;
   }
  }
 }


 if (FUNC_3(VAR_0) != VAR_1)
  return;

 switch(VAR_4) {
 case 129:
  FUNC_4(1);
  break;
 case 130:
  FUNC_4(0);
  break;
 case 128:
 default:
  FUNC_1(VAR_3, FUNC_4);
  break;
 }
}
