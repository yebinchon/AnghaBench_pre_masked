
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct worker {TYPE_2__* back; } ;
struct sockaddr_storage {int dummy; } ;
struct query_info {int dummy; } ;
struct outbound_entry {int qsent; struct module_qstate* qstate; } ;
struct module_qstate {TYPE_3__* env; int region; } ;
typedef int socklen_t ;
struct TYPE_6__ {TYPE_1__* cfg; struct worker* worker; } ;
struct TYPE_5__ {int udp_buff; } ;
struct TYPE_4__ {int tcp_upstream; } ;


 int FUNC_0 (TYPE_2__*,struct query_info*,int ,int,int,int,int ,int,char*,struct sockaddr_storage*,int ,int *,size_t,struct module_qstate*,int ,struct outbound_entry*,int ,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_0 ;

struct outbound_entry*
FUNC_2(struct query_info* VAR_1, uint16_t VAR_2, int VAR_3,
 int VAR_4, int VAR_5, struct sockaddr_storage* VAR_6,
 socklen_t VAR_7, uint8_t* VAR_8, size_t VAR_9, int VAR_10,
 char* VAR_11, struct module_qstate* VAR_12)
{
 struct worker* VAR_13 = VAR_12->env->worker;
 struct outbound_entry* VAR_14 = (struct outbound_entry*)FUNC_1(
  VAR_12->region, sizeof(*VAR_14));
 if(!VAR_14)
  return ((void*)0);
 VAR_14->qstate = VAR_12;
 VAR_14->qsent = FUNC_0(VAR_13->back, VAR_1, VAR_2, VAR_3,
  VAR_4, VAR_5, VAR_12->env->cfg->tcp_upstream,
  VAR_10, VAR_11, VAR_6, VAR_7, VAR_8, VAR_9, VAR_12,
  VAR_0, VAR_14, VAR_13->back->udp_buff, VAR_12->env);
 if(!VAR_14->qsent) {
  return ((void*)0);
 }
 return VAR_14;
}
