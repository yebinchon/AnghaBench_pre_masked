
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static void FUNC_6(void)
{
 char *VAR_0;
 struct stat VAR_1;

 VAR_0 = FUNC_1("events/header_page");
 if (FUNC_4(VAR_0, &VAR_1) < 0)
  FUNC_0("can't read '%s'", VAR_0);

 FUNC_5("header_page", 12);
 FUNC_3(VAR_0, 8);
 FUNC_2(VAR_0);

 VAR_0 = FUNC_1("events/header_event");
 if (FUNC_4(VAR_0, &VAR_1) < 0)
  FUNC_0("can't read '%s'", VAR_0);

 FUNC_5("header_event", 13);
 FUNC_3(VAR_0, 8);
 FUNC_2(VAR_0);
}
