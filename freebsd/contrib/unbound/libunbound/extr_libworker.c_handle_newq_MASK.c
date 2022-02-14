
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct query_info {int * qname; } ;
struct libworker {TYPE_2__* back; TYPE_3__* env; TYPE_4__* ctx; scalar_t__ is_bg_thread; } ;
struct edns_data {int dummy; } ;
struct ctx_query {struct libworker* w; void* msg_security; } ;
struct TYPE_10__ {TYPE_1__* env; int local_zones; int cfglock; } ;
struct TYPE_9__ {int mesh; int scratch; } ;
struct TYPE_8__ {int * udp_buff; } ;
struct TYPE_7__ {scalar_t__ auth_zones; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct libworker*,struct ctx_query*,int *,int ,int *,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,TYPE_3__*,struct query_info*,struct edns_data*,int *,int *,int ) ;
 struct ctx_query* FUNC_2 (TYPE_4__*,int *,int ) ;
 struct ctx_query* FUNC_3 (TYPE_4__*,int *,int ) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int ,TYPE_3__*,struct query_info*,struct edns_data*,int *,int ,int *,int *,int ,int *,int ,int *,int ,int *,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,struct query_info*,scalar_t__,struct edns_data*,int *,scalar_t__,int ,struct ctx_query*) ;
 int FUNC_10 (int ) ;
 void* VAR_5 ;
 int FUNC_11 (struct libworker*,struct ctx_query*,struct query_info*,struct edns_data*) ;
 int FUNC_12 (int *,int,scalar_t__) ;

__attribute__((used)) static void
FUNC_13(struct libworker* VAR_6, uint8_t* VAR_7, uint32_t VAR_8)
{
 uint16_t VAR_9, VAR_10;
 struct query_info VAR_11;
 struct edns_data VAR_12;
 struct ctx_query* VAR_13;
 if(VAR_6->is_bg_thread) {
  FUNC_6(&VAR_6->ctx->cfglock);
  VAR_13 = FUNC_3(VAR_6->ctx, VAR_7, VAR_8);
  FUNC_7(&VAR_6->ctx->cfglock);
 } else {
  VAR_13 = FUNC_2(VAR_6->ctx, VAR_7, VAR_8);
 }
 FUNC_4(VAR_7);
 if(!VAR_13) {
  FUNC_8("failed to deserialize newq");
  return;
 }
 if(!FUNC_11(VAR_6, VAR_13, &VAR_11, &VAR_12)) {
  FUNC_0(VAR_6, VAR_13, ((void*)0), VAR_3, ((void*)0), 0);
  return;
 }
 VAR_10 = 0;
 VAR_9 = VAR_0;

 FUNC_12(VAR_6->back->udp_buff, 0, VAR_10);
 FUNC_12(VAR_6->back->udp_buff, 2, VAR_9);
 if(FUNC_5(VAR_6->ctx->local_zones, VAR_6->env, &VAR_11, &VAR_12,
  VAR_6->back->udp_buff, VAR_6->env->scratch, ((void*)0), ((void*)0), 0, ((void*)0), 0,
  ((void*)0), 0, ((void*)0), 0, ((void*)0))) {
  FUNC_10(VAR_6->env->scratch);
  VAR_13->msg_security = VAR_5;
  FUNC_0(VAR_6, VAR_13, VAR_6->back->udp_buff, VAR_1, ((void*)0), 0);
  FUNC_4(VAR_11.qname);
  return;
 }
 if(VAR_6->ctx->env->auth_zones && FUNC_1(VAR_6->ctx->env->auth_zones,
  VAR_6->env, &VAR_11, &VAR_12, ((void*)0), VAR_6->back->udp_buff, VAR_6->env->scratch)) {
  FUNC_10(VAR_6->env->scratch);
  VAR_13->msg_security = VAR_5;
  FUNC_0(VAR_6, VAR_13, VAR_6->back->udp_buff, VAR_1, ((void*)0), 0);
  FUNC_4(VAR_11.qname);
  return;
 }
 VAR_13->w = VAR_6;

 if(!FUNC_9(VAR_6->env->mesh, &VAR_11, VAR_9, &VAR_12,
  VAR_6->back->udp_buff, VAR_10, VAR_4, VAR_13)) {
  FUNC_0(VAR_6, VAR_13, ((void*)0), VAR_2, ((void*)0), 0);
 }
 FUNC_4(VAR_11.qname);
}
