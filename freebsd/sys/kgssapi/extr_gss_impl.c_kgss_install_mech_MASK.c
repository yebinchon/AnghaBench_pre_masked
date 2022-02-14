
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj_class {int dummy; } ;
struct kgss_mech {char const* km_mech_name; struct kobj_class* km_class; int km_mech_type; } ;
typedef int gss_OID ;


 int FUNC_0 (int *,struct kgss_mech*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct kgss_mech* FUNC_1 (int,int ,int ) ;

void
FUNC_2(gss_OID VAR_4, const char *VAR_5, struct kobj_class *VAR_6)
{
 struct kgss_mech *VAR_7;

 VAR_7 = FUNC_1(sizeof(struct kgss_mech), VAR_0, VAR_1);
 VAR_7->km_mech_type = VAR_4;
 VAR_7->km_mech_name = VAR_5;
 VAR_7->km_class = VAR_6;
 FUNC_0(&VAR_2, VAR_7, VAR_3);
}
