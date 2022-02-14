
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {scalar_t__ icv_fullbits; scalar_t__ icv_truncbits; } ;
struct TYPE_6__ {TYPE_2__ auth; } ;
struct TYPE_4__ {int sadb_alg_id; } ;
struct xfrm_algo_desc {TYPE_3__ uinfo; int name; TYPE_1__ desc; } ;
struct xfrm_algo_auth {scalar_t__ alg_trunc_len; int alg_name; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct xfrm_algo_auth* FUNC_0 (struct xfrm_algo_auth*,int ,int ) ;
 struct xfrm_algo_auth* FUNC_1 (struct nlattr*) ;
 int FUNC_2 (int ,int ) ;
 struct xfrm_algo_desc* FUNC_3 (int ,int) ;
 int FUNC_4 (struct xfrm_algo_auth*) ;

__attribute__((used)) static int FUNC_5(struct xfrm_algo_auth **VAR_4, u8 *VAR_5,
        struct nlattr *VAR_6)
{
 struct xfrm_algo_auth *VAR_7, *VAR_8;
 struct xfrm_algo_desc *VAR_9;

 if (!VAR_6)
  return 0;

 VAR_8 = FUNC_1(VAR_6);

 VAR_9 = FUNC_3(VAR_8->alg_name, 1);
 if (!VAR_9)
  return -VAR_2;
 if (VAR_8->alg_trunc_len > VAR_9->uinfo.auth.icv_fullbits)
  return -VAR_0;
 *VAR_5 = VAR_9->desc.sadb_alg_id;

 VAR_7 = FUNC_0(VAR_8, FUNC_4(VAR_8), VAR_3);
 if (!VAR_7)
  return -VAR_1;

 FUNC_2(VAR_7->alg_name, VAR_9->name);
 if (!VAR_7->alg_trunc_len)
  VAR_7->alg_trunc_len = VAR_9->uinfo.auth.icv_truncbits;

 *VAR_4 = VAR_7;
 return 0;
}
