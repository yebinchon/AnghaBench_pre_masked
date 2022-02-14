
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct ub_ctx {TYPE_1__* env; int local_zones; struct libworker* event_worker; } ;
struct query_info {int qname; } ;
struct libworker {TYPE_2__* back; TYPE_3__* env; } ;
struct edns_data {int dummy; } ;
struct ctx_query {int querynum; struct libworker* w; } ;
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
 int FUNC_2 (struct ctx_query*,int ,int ,int ,int *,int ) ;
 scalar_t__ FUNC_3 (int ,TYPE_3__*,struct query_info*,struct edns_data*,int ,int ,int *,int *,int ,int *,int ,int *,int ,int *,int ,int *) ;
 int FUNC_4 (int ,struct query_info*,scalar_t__,struct edns_data*,int ,scalar_t__,int (*) (struct ctx_query*,int ,int ,int ,int *,int ),struct ctx_query*) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (struct libworker*,struct ctx_query*,struct query_info*,struct edns_data*) ;
 int FUNC_7 (int ,int,scalar_t__) ;

int FUNC_8(struct ub_ctx* VAR_7, struct ctx_query* VAR_8,
 int* VAR_9)
{
 struct libworker* VAR_10 = VAR_7->event_worker;
 uint16_t VAR_11, VAR_12;
 struct query_info VAR_13;
 struct edns_data VAR_14;
 if(!VAR_10)
  return VAR_2;
 if(!FUNC_6(VAR_10, VAR_8, &VAR_13, &VAR_14))
  return VAR_5;
 VAR_12 = 0;
 VAR_11 = VAR_0;
 VAR_8->w = VAR_10;

 FUNC_7(VAR_10->back->udp_buff, 0, VAR_12);
 FUNC_7(VAR_10->back->udp_buff, 2, VAR_11);
 if(FUNC_3(VAR_7->local_zones, VAR_10->env, &VAR_13, &VAR_14,
  VAR_10->back->udp_buff, VAR_10->env->scratch, ((void*)0), ((void*)0), 0, ((void*)0), 0,
  ((void*)0), 0, ((void*)0), 0, ((void*)0))) {
  FUNC_5(VAR_10->env->scratch);
  FUNC_1(VAR_13.qname);
  FUNC_2(VAR_8, VAR_1,
   VAR_10->back->udp_buff, VAR_6, ((void*)0), 0);
  return VAR_3;
 }
 if(VAR_7->env->auth_zones && FUNC_0(VAR_7->env->auth_zones,
  VAR_10->env, &VAR_13, &VAR_14, ((void*)0), VAR_10->back->udp_buff, VAR_10->env->scratch)) {
  FUNC_5(VAR_10->env->scratch);
  FUNC_1(VAR_13.qname);
  FUNC_2(VAR_8, VAR_1,
   VAR_10->back->udp_buff, VAR_6, ((void*)0), 0);
  return VAR_3;
 }

 if(VAR_9)
  *VAR_9 = VAR_8->querynum;
 if(!FUNC_4(VAR_10->env->mesh, &VAR_13, VAR_11, &VAR_14,
  VAR_10->back->udp_buff, VAR_12, FUNC_2, VAR_8)) {
  FUNC_1(VAR_13.qname);
  return VAR_4;
 }
 FUNC_1(VAR_13.qname);
 return VAR_3;
}
