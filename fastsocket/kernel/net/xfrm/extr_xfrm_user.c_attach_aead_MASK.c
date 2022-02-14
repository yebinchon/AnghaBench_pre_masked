
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int sadb_alg_id; } ;
struct xfrm_algo_desc {int name; TYPE_1__ desc; } ;
struct xfrm_algo_aead {int alg_name; int alg_icv_len; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xfrm_algo_aead*) ;
 struct xfrm_algo_aead* FUNC_1 (struct xfrm_algo_aead*,int ,int ) ;
 struct xfrm_algo_aead* FUNC_2 (struct nlattr*) ;
 int FUNC_3 (int ,int ) ;
 struct xfrm_algo_desc* FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct xfrm_algo_aead **VAR_3, u8 *VAR_4,
         struct nlattr *VAR_5)
{
 struct xfrm_algo_aead *VAR_6, *VAR_7;
 struct xfrm_algo_desc *VAR_8;

 if (!VAR_5)
  return 0;

 VAR_7 = FUNC_2(VAR_5);

 VAR_8 = FUNC_4(VAR_7->alg_name, VAR_7->alg_icv_len, 1);
 if (!VAR_8)
  return -VAR_1;
 *VAR_4 = VAR_8->desc.sadb_alg_id;

 VAR_6 = FUNC_1(VAR_7, FUNC_0(VAR_7), VAR_2);
 if (!VAR_6)
  return -VAR_0;

 FUNC_3(VAR_6->alg_name, VAR_8->name);
 *VAR_3 = VAR_6;
 return 0;
}
