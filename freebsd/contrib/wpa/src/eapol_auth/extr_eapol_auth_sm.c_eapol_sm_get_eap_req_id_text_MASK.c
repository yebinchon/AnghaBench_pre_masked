
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct eapol_state_machine {TYPE_2__* eapol; } ;
struct TYPE_3__ {size_t eap_req_id_text_len; char const* eap_req_id_text; } ;
struct TYPE_4__ {TYPE_1__ conf; } ;



__attribute__((used)) static const char * FUNC_0(void *VAR_0, size_t *VAR_1)
{
 struct eapol_state_machine *VAR_2 = VAR_0;
 *VAR_1 = VAR_2->eapol->conf.eap_req_id_text_len;
 return VAR_2->eapol->conf.eap_req_id_text;
}
