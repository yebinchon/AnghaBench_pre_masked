
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct servent {char* s_name; char* s_proto; char** s_aliases; scalar_t__ s_port; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(const struct servent *VAR_0)
{
 char **VAR_1;

 FUNC_1("name=%s, port=%d, proto=%s, aliases=",
     VAR_0->s_name, FUNC_0((uint16_t)VAR_0->s_port), VAR_0->s_proto);
 for (VAR_1 = VAR_0->s_aliases; *VAR_1; VAR_1++)
  FUNC_1("%s ", *VAR_1);
 FUNC_1("\n");
}
