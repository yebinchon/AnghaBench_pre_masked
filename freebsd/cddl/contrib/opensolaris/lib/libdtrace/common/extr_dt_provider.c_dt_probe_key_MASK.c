
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* dtpd_mod; char* dtpd_func; char* dtpd_name; } ;
typedef TYPE_1__ dtrace_probedesc_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,char*,char*,char*) ;

__attribute__((used)) static char *
FUNC_1(const dtrace_probedesc_t *VAR_1, char *VAR_2)
{
 (void) FUNC_0(VAR_2, VAR_0, "%s:%s:%s",
     VAR_1->dtpd_mod, VAR_1->dtpd_func, VAR_1->dtpd_name);
 return (VAR_2);
}
