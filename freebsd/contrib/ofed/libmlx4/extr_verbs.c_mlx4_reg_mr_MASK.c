
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_reg_mr_resp {int dummy; } ;
struct ibv_reg_mr {int dummy; } ;
struct ibv_pd {int dummy; } ;
struct ibv_mr {int dummy; } ;


 int FUNC_0 (struct ibv_mr*) ;
 int FUNC_1 (struct ibv_pd*,void*,size_t,uintptr_t,int,struct ibv_mr*,struct ibv_reg_mr*,int,struct ibv_reg_mr_resp*,int) ;
 struct ibv_mr* FUNC_2 (int) ;

struct ibv_mr *FUNC_3(struct ibv_pd *VAR_0, void *VAR_1, size_t VAR_2,
      int VAR_3)
{
 struct ibv_mr *VAR_4;
 struct ibv_reg_mr VAR_5;
 struct ibv_reg_mr_resp VAR_6;
 int VAR_7;

 VAR_4 = FUNC_2(sizeof *VAR_4);
 if (!VAR_4)
  return ((void*)0);

 VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_2, (uintptr_t) VAR_1,
        VAR_3, VAR_4, &VAR_5, sizeof VAR_5,
        &VAR_6, sizeof VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_4);
  return ((void*)0);
 }

 return VAR_4;
}
