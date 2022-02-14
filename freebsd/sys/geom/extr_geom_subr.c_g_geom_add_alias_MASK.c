
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_geom_alias {char const* ga_alias; } ;
struct g_geom {int aliases; } ;


 int FUNC_0 (int *,struct g_geom_alias*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

void
FUNC_4(struct g_geom *VAR_2, const char *VAR_3)
{
 struct g_geom_alias *VAR_4;

 VAR_4 = (struct g_geom_alias *)FUNC_1(
  sizeof(struct g_geom_alias) + FUNC_3(VAR_3) + 1, VAR_0);
 FUNC_2((char *)(VAR_4 + 1), VAR_3);
 VAR_4->ga_alias = (const char *)(VAR_4 + 1);
 FUNC_0(&VAR_2->aliases, VAR_4, VAR_1);
}
