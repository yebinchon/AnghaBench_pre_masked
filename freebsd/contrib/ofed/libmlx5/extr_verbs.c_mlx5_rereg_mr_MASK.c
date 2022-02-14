
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_rereg_mr_resp {int dummy; } ;
struct ibv_rereg_mr {int dummy; } ;
struct ibv_pd {int dummy; } ;
struct ibv_mr {int dummy; } ;
typedef int resp ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ibv_mr*,int,void*,size_t,uintptr_t,int,struct ibv_pd*,struct ibv_rereg_mr*,int,struct ibv_rereg_mr_resp*,int) ;

int FUNC_1(struct ibv_mr *VAR_2, int VAR_3, struct ibv_pd *VAR_4, void *VAR_5,
    size_t VAR_6, int VAR_7)
{
 struct ibv_rereg_mr VAR_8;
 struct ibv_rereg_mr_resp VAR_9;

 if (VAR_3 & VAR_1)
  return VAR_0;

 return FUNC_0(VAR_2, VAR_3, VAR_5, VAR_6, (uintptr_t)VAR_5,
    VAR_7, VAR_4, &VAR_8, sizeof(VAR_8), &VAR_9,
    sizeof(VAR_9));
}
