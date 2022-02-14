
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct gctl_req*) ;
 int FUNC_1 (struct gctl_req*) ;
 int FUNC_2 (struct gctl_req*) ;
 int FUNC_3 (struct gctl_req*,char*,char const*) ;
 char* FUNC_4 (struct gctl_req*,char*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(struct gctl_req *VAR_2, unsigned VAR_3)
{
 const char *VAR_4;

 if ((VAR_3 & VAR_0) != 0)
  VAR_1 = 1;

 VAR_4 = FUNC_4(VAR_2, "verb");
 if (VAR_4 == ((void*)0)) {
  FUNC_3(VAR_2, "No '%s' argument.", "verb");
  return;
 }
 if (FUNC_5(VAR_4, "label") == 0)
  FUNC_2(VAR_2);
 else if (FUNC_5(VAR_4, "clear") == 0)
  FUNC_0(VAR_2);
 else if (FUNC_5(VAR_4, "dump") == 0)
  FUNC_1(VAR_2);
 else
  FUNC_3(VAR_2, "Unknown command: %s.", VAR_4);
}
