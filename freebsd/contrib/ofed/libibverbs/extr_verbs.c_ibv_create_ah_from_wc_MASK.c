
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ibv_wc {int dummy; } ;
struct ibv_pd {int context; } ;
struct ibv_grh {int dummy; } ;
struct ibv_ah_attr {int dummy; } ;
struct ibv_ah {int dummy; } ;


 struct ibv_ah* FUNC_0 (struct ibv_pd*,struct ibv_ah_attr*) ;
 int FUNC_1 (int ,int ,struct ibv_wc*,struct ibv_grh*,struct ibv_ah_attr*) ;

struct ibv_ah *FUNC_2(struct ibv_pd *VAR_0, struct ibv_wc *VAR_1,
         struct ibv_grh *VAR_2, uint8_t VAR_3)
{
 struct ibv_ah_attr VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0->context, VAR_3, VAR_1, VAR_2, &VAR_4);
 if (VAR_5)
  return ((void*)0);

 return FUNC_0(VAR_0, &VAR_4);
}
