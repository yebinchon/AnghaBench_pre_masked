
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int,int ,int ****) ;
 int **** VAR_1 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_7 (void)
{

 int VAR_3;

 VAR_3 = FUNC_4 ("/dev/serial/ctl0", 0);
 if (VAR_3 < 0) {
  FUNC_5 ("/dev/serial/ctl0");
  FUNC_1 (-1);
 }
 if (FUNC_3 (VAR_3, VAR_0, VAR_1) < 0) {
  FUNC_5 ("getting list of channels");
  FUNC_1 (-1);
 }
 FUNC_0 (VAR_3);
}
