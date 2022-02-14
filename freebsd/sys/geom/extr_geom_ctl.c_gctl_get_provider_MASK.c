
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
struct g_provider {int dummy; } ;


 struct g_provider* FUNC_0 (char const*) ;
 int FUNC_1 (struct gctl_req*,char*,char const*) ;
 char* FUNC_2 (struct gctl_req*,char const*) ;

struct g_provider *
FUNC_3(struct gctl_req *VAR_0, char const *VAR_1)
{
 char const *VAR_2;
 struct g_provider *VAR_3;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
  return (((void*)0));
 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 != ((void*)0))
  return (VAR_3);
 FUNC_1(VAR_0, "Provider not found: \"%s\"", VAR_2);
 return (((void*)0));
}
