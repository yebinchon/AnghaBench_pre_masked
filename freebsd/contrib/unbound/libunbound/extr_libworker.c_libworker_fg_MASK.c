
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct ub_ctx {TYPE_1__* env; int local_zones; } ;
struct query_info {int qname; } ;
struct libworker {int base; TYPE_2__* back; TYPE_3__* env; } ;
struct edns_data {int dummy; } ;
struct ctx_query {struct libworker* w; } ;
struct TYPE_7__ {int mesh; int scratch; } ;
struct TYPE_6__ {int udp_buff; } ;
struct TYPE_5__ {scalar_t__ auth_zones; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__,TYPE_3__*,struct query_info*,struct edns_data*,int *,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct libworker*) ;
 int VAR_6 ;
 int FUNC_4 (struct ctx_query*,int ,int ,int ,int *,int ) ;
 struct libworker* FUNC_5 (struct ub_ctx*,int ,int *) ;
 scalar_t__ FUNC_6 (int ,TYPE_3__*,struct query_info*,struct edns_data*,int ,int ,int *,int *,int ,int *,int ,int *,int ,int *,int ,int *) ;
 int FUNC_7 (int ,struct query_info*,scalar_t__,struct edns_data*,int ,scalar_t__,int ,struct ctx_query*) ;
 int FUNC_8 (int ) ;
 int VAR_7 ;
 int FUNC_9 (struct libworker*,struct ctx_query*,struct query_info*,struct edns_data*) ;
 int FUNC_10 (int ,int,scalar_t__) ;

int FUNC_11(struct ub_ctx* VAR_8, struct ctx_query* VAR_9)
{
 struct libworker* VAR_10 = FUNC_5(VAR_8, 0, ((void*)0));
 uint16_t VAR_11, VAR_12;
 struct query_info VAR_13;
 struct edns_data VAR_14;
 if(!VAR_10)
  return VAR_2;
 if(!FUNC_9(VAR_10, VAR_9, &VAR_13, &VAR_14)) {
  FUNC_3(VAR_10);
  return VAR_5;
 }
 VAR_12 = 0;
 VAR_11 = VAR_0;
 VAR_9->w = VAR_10;

 FUNC_10(VAR_10->back->udp_buff, 0, VAR_12);
 FUNC_10(VAR_10->back->udp_buff, 2, VAR_11);
 if(FUNC_6(VAR_8->local_zones, VAR_10->env, &VAR_13, &VAR_14,
  VAR_10->back->udp_buff, VAR_10->env->scratch, ((void*)0), ((void*)0), 0, ((void*)0), 0,
  ((void*)0), 0, ((void*)0), 0, ((void*)0))) {
  FUNC_8(VAR_10->env->scratch);
  FUNC_4(VAR_9, VAR_1,
   VAR_10->back->udp_buff, VAR_7, ((void*)0), 0);
  FUNC_3(VAR_10);
  FUNC_2(VAR_13.qname);
  return VAR_3;
 }
 if(VAR_8->env->auth_zones && FUNC_0(VAR_8->env->auth_zones,
  VAR_10->env, &VAR_13, &VAR_14, ((void*)0), VAR_10->back->udp_buff, VAR_10->env->scratch)) {
  FUNC_8(VAR_10->env->scratch);
  FUNC_4(VAR_9, VAR_1,
   VAR_10->back->udp_buff, VAR_7, ((void*)0), 0);
  FUNC_3(VAR_10);
  FUNC_2(VAR_13.qname);
  return VAR_3;
 }

 if(!FUNC_7(VAR_10->env->mesh, &VAR_13, VAR_11, &VAR_14,
  VAR_10->back->udp_buff, VAR_12, VAR_6, VAR_9)) {
  FUNC_2(VAR_13.qname);
  return VAR_4;
 }
 FUNC_2(VAR_13.qname);


 FUNC_1(VAR_10->base);

 FUNC_3(VAR_10);
 return VAR_3;
}
