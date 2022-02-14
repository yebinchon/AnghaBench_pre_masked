
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct verbs_context {TYPE_1__* priv; } ;
struct ibv_cq_init_attr_ex {int wc_flags; int cq_context; int channel; } ;
struct ibv_cq_ex {int dummy; } ;
struct ibv_context {int dummy; } ;
struct TYPE_2__ {struct ibv_cq_ex* (* create_cq_ex ) (struct ibv_context*,struct ibv_cq_init_attr_ex*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ibv_cq_ex*) ;
 struct ibv_cq_ex* FUNC_1 (struct ibv_context*,struct ibv_cq_init_attr_ex*) ;
 struct verbs_context* FUNC_2 (struct ibv_context*) ;
 int FUNC_3 (int ,struct ibv_context*,int ,int ) ;

__attribute__((used)) static struct ibv_cq_ex *
FUNC_4(struct ibv_context *VAR_3,
         struct ibv_cq_init_attr_ex *VAR_4)
{
 struct verbs_context *VAR_5 = FUNC_2(VAR_3);
 struct ibv_cq_ex *VAR_6;

 if (VAR_4->wc_flags & ~VAR_1) {
  VAR_2 = VAR_0;
  return ((void*)0);
 }

 VAR_6 = VAR_5->priv->create_cq_ex(VAR_3, VAR_4);

 if (VAR_6)
  FUNC_3(FUNC_0(VAR_6), VAR_3,
           VAR_4->channel, VAR_4->cq_context);

 return VAR_6;
}
