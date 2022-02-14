
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gss_ctx {int mech_type; } ;
struct auth_domain {int dummy; } ;


 struct auth_domain* FUNC_0 (char*) ;
 char* FUNC_1 (int ,int ) ;

__attribute__((used)) static struct auth_domain *
FUNC_2(struct gss_ctx *VAR_0, u32 VAR_1)
{
 char *VAR_2;

 VAR_2 = FUNC_1(VAR_0->mech_type, VAR_1);
 if (!VAR_2)
  return ((void*)0);
 return FUNC_0(VAR_2);
}
