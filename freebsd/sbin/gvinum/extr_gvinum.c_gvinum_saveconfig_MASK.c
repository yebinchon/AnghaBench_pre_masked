
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;


 int FUNC_0 (struct gctl_req*) ;
 struct gctl_req* FUNC_1 () ;
 char* FUNC_2 (struct gctl_req*) ;
 int FUNC_3 (struct gctl_req*,char*,int,char*) ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct gctl_req *VAR_0;
 const char *VAR_1;

 VAR_0 = FUNC_1();
 FUNC_3(VAR_0, "class", -1, "VINUM");
 FUNC_3(VAR_0, "verb", -1, "saveconfig");
 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1 != ((void*)0))
  FUNC_4("can't save configuration: %s", VAR_1);
 FUNC_0(VAR_0);
}
