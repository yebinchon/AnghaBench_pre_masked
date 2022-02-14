
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protoent {char* p_name; int p_proto; char** p_aliases; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(const struct protoent *VAR_0)
{
 char **VAR_1;

 FUNC_0("name=%s, proto=%d, aliases=",
     VAR_0->p_name, VAR_0->p_proto);
 for (VAR_1 = VAR_0->p_aliases; *VAR_1; VAR_1++)
  FUNC_0("%s ", *VAR_1);
 FUNC_0("\n");
}
