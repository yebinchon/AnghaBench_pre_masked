
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct eapol_state_machine {TYPE_2__* eapol; } ;
struct TYPE_3__ {char const* erp_domain; } ;
struct TYPE_4__ {TYPE_1__ conf; } ;



__attribute__((used)) static const char * FUNC_0(void *VAR_0)
{
 struct eapol_state_machine *VAR_1 = VAR_0;
 return VAR_1->eapol->conf.erp_domain;
}
