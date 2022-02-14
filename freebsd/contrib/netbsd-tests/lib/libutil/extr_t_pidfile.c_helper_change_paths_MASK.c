
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_2)
{

 if (FUNC_4("./var/run/first.pid") == -1)
  FUNC_2(VAR_0, "Failed to create pidfile "
      "'./var/run/first.pid'");
 FUNC_0("./var/run/first.pid");

 if (FUNC_4("./second.pid") == -1)
  FUNC_2(VAR_0, "Failed to create pidfile 'second.pid'");
 FUNC_1("./var/run/first.pid");
 FUNC_0("./second.pid");

 FUNC_3(VAR_1);
}
