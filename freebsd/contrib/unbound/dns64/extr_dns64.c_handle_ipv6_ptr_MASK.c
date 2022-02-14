
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct TYPE_3__ {int s6_addr; } ;
struct sockaddr_in6 {TYPE_1__ sin6_addr; int sin6_family; } ;
struct query_info {scalar_t__ qname; int qname_len; } ;
struct module_qstate {int curmod; int ** minfo; int * ext_state; int query_flags; TYPE_2__* env; int region; struct query_info qinfo; } ;
struct dns64_env {scalar_t__ prefix_net; int prefix_addr; } ;
typedef int socklen_t ;
typedef int sin6 ;
typedef enum module_ext_state { ____Placeholder_module_ext_state } module_ext_state ;
struct TYPE_4__ {int (* attach_sub ) (struct module_qstate*,struct query_info*,int ,int ,int ,struct module_qstate**) ;scalar_t__* modinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sockaddr_storage*,int,int *,scalar_t__,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int (*) (struct module_qstate*,struct query_info*,int ,int ,int ,struct module_qstate**)) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct sockaddr_in6*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (struct module_qstate*,struct query_info*,int ,int ,int ,struct module_qstate**) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static enum module_ext_state
FUNC_10(struct module_qstate* VAR_7, int VAR_8)
{
    struct dns64_env* VAR_9 = (struct dns64_env*)VAR_7->env->modinfo[VAR_8];
    struct module_qstate* VAR_10 = ((void*)0);
    struct query_info VAR_11;
    struct sockaddr_in6 VAR_12;


    FUNC_5(&VAR_12, 0, sizeof(VAR_12));
    VAR_12 = VAR_0;
    if (!FUNC_6((char*)VAR_7->qinfo.qname, VAR_12))
        return VAR_5;





    if (FUNC_0((struct sockaddr_storage*)&VAR_12, 128,
                &VAR_9->prefix_addr, VAR_9->prefix_net,
                (socklen_t)sizeof(VAR_12)) != VAR_9->prefix_net)
        return VAR_5;

    FUNC_9(VAR_2, "dns64: rewrite PTR record");






    VAR_11 = VAR_7->qinfo;
    if (!(VAR_11.qname = FUNC_7(VAR_7->region, VAR_1)))
        return VAR_3;
    VAR_11.qname_len = FUNC_4(FUNC_1(VAR_12,
                VAR_9->prefix_net), (char*)VAR_11.qname);


    FUNC_2(FUNC_3(VAR_7->env->attach_sub));
    if(!(*VAR_7->env->attach_sub)(VAR_7, &VAR_11, VAR_7->query_flags, 0, 0,
                &VAR_10))
        return VAR_3;
    if (VAR_10) {
        VAR_10->curmod = VAR_8;
        VAR_10->ext_state[VAR_8] = VAR_4;
 VAR_10->minfo[VAR_8] = ((void*)0);
    }

    return VAR_6;
}
