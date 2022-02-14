
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_pd {int dummy; } ;
struct ibv_mw {int dummy; } ;
struct ibv_alloc_mw_resp {int dummy; } ;
struct ibv_alloc_mw {int dummy; } ;
typedef int resp ;
typedef enum ibv_mw_type { ____Placeholder_ibv_mw_type } ibv_mw_type ;
typedef int cmd ;


 struct ibv_mw* FUNC_0 (int,int) ;
 int FUNC_1 (struct ibv_mw*) ;
 int FUNC_2 (struct ibv_pd*,int,struct ibv_mw*,struct ibv_alloc_mw*,int,struct ibv_alloc_mw_resp*,int) ;

struct ibv_mw *FUNC_3(struct ibv_pd *VAR_0, enum ibv_mw_type VAR_1)
{
 struct ibv_mw *VAR_2;
 struct ibv_alloc_mw VAR_3;
 struct ibv_alloc_mw_resp VAR_4;
 int VAR_5;

 VAR_2 = FUNC_0(1, sizeof(*VAR_2));
 if (!VAR_2)
  return ((void*)0);

 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, &VAR_3, sizeof(VAR_3),
        &VAR_4, sizeof(VAR_4));

 if (VAR_5) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }

 return VAR_2;
}
