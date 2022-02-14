
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ip {int dummy; } ;
struct ibv_wc {int wc_flags; } ;
struct ibv_grh {int dummy; } ;
struct ibv_context {int dummy; } ;
struct ibv_ah_attr {int is_global; } ;


 int VAR_0 ;
 int FUNC_0 (struct ibv_grh*) ;
 int FUNC_1 (struct ibv_ah_attr*,int ,int) ;
 int FUNC_2 (struct ibv_context*,struct ibv_ah_attr*,struct ip*,int ) ;
 int FUNC_3 (struct ibv_context*,struct ibv_ah_attr*,struct ibv_grh*,int ) ;
 int FUNC_4 (struct ibv_ah_attr*,struct ibv_wc*,struct ibv_grh*,int ) ;

int FUNC_5(struct ibv_context *VAR_1, uint8_t VAR_2,
   struct ibv_wc *VAR_3, struct ibv_grh *VAR_4,
   struct ibv_ah_attr *VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;

 FUNC_1(VAR_5, 0, sizeof *VAR_5);
 FUNC_4(VAR_5, VAR_3, VAR_4, VAR_2);

 if (VAR_3->wc_flags & VAR_0) {
  VAR_5->is_global = 1;
  VAR_6 = FUNC_0(VAR_4);

  if (VAR_6 == 4)
   VAR_7 = FUNC_2(VAR_1, VAR_5,
        (struct ip *)((void *)VAR_4 + 20),
        VAR_2);
  else if (VAR_6 == 6)
   VAR_7 = FUNC_3(VAR_1, VAR_5, VAR_4,
        VAR_2);
  else
   VAR_7 = -1;
 }

 return VAR_7;
}
