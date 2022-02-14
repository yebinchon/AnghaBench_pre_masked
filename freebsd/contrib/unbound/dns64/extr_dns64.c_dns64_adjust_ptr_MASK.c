
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dname_len; int dname; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct TYPE_4__ {int qname_len; int qname; } ;
struct module_qstate {TYPE_2__ qinfo; struct dns_msg* return_msg; int region; } ;
struct dns_msg {int rep; TYPE_2__ qinfo; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 struct ub_packed_rrset_key* FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(struct module_qstate* VAR_1, struct module_qstate* VAR_2)
{
    struct ub_packed_rrset_key* VAR_3;

    FUNC_3(VAR_0, "adjusting PTR reply");


    if (!(VAR_2->return_msg = (struct dns_msg*)FUNC_0(VAR_2->region,
                    sizeof(struct dns_msg))))
        return;
    VAR_2->return_msg->qinfo = VAR_2->qinfo;
    VAR_2->return_msg->rep = FUNC_2(VAR_1->return_msg->rep, ((void*)0),
            VAR_2->region);





    VAR_3 = FUNC_1(&VAR_1->qinfo, VAR_2->return_msg->rep);
    if(VAR_3) {
     VAR_3->rk.dname = VAR_2->qinfo.qname;
     VAR_3->rk.dname_len = VAR_2->qinfo.qname_len;
    }
}
