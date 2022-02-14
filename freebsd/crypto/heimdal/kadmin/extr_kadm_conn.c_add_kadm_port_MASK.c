
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kadm_port {unsigned int def_port; struct kadm_port* next; int port; } ;
typedef int krb5_context ;


 struct kadm_port* VAR_0 ;
 int FUNC_0 (int ,char*,unsigned long) ;
 struct kadm_port* FUNC_1 (int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void
FUNC_3(krb5_context VAR_1, const char *VAR_2, unsigned int VAR_3)
{
    struct kadm_port *VAR_4;
    VAR_4 = FUNC_1(sizeof(*VAR_4));
    if(VAR_4 == ((void*)0)) {
 FUNC_0(VAR_1, "failed to allocate %lu bytes\n",
     (unsigned long)sizeof(*VAR_4));
 return;
    }

    VAR_4->port = FUNC_2(VAR_2);
    VAR_4->def_port = VAR_3;

    VAR_4->next = VAR_0;
    VAR_0 = VAR_4;
}
