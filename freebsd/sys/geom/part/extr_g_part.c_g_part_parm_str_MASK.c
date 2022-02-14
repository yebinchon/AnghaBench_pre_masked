
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gctl_req*,char*,int,char const*,char const*) ;
 char* FUNC_1 (struct gctl_req*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int
FUNC_3(struct gctl_req *VAR_2, const char *VAR_3, const char **VAR_4)
{
 const char *VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (VAR_5 == ((void*)0))
  return (VAR_1);

 if (FUNC_2(VAR_3, "label") != 0 && VAR_5[0] == '\0') {
  FUNC_0(VAR_2, "%d %s '%s'", VAR_0, VAR_3, VAR_5);
  return (VAR_0);
 }
 *VAR_4 = VAR_5;
 return (0);
}
