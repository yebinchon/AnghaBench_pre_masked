
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devdesc {int dummy; } ;


 char* FUNC_0 (struct devdesc*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void
FUNC_3(struct devdesc *VAR_0)
{
 const char *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 FUNC_1("Setting currdev to %s\n", VAR_1);
 FUNC_2(VAR_1);
}
