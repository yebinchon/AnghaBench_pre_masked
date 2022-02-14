
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* backtitle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 int VAR_3 ;

int FUNC_9(const char *VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_6();
 FUNC_5(VAR_3, VAR_5, VAR_6);
 if (VAR_5 < 19 || VAR_6 < 80) {
  FUNC_3();
  return -VAR_0;
 }

 VAR_2.backtitle = VAR_4;
 FUNC_1(FUNC_4("MENUCONFIG_COLOR"));

 FUNC_7(VAR_3, VAR_1);
 FUNC_0();
 FUNC_8();
 FUNC_2();

 return 0;
}
