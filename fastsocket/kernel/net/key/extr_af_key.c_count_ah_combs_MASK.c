
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_tmpl {int dummy; } ;
struct xfrm_algo_desc {scalar_t__ available; } ;
struct sadb_prop {int dummy; } ;
struct sadb_comb {int dummy; } ;


 scalar_t__ FUNC_0 (struct xfrm_tmpl*,struct xfrm_algo_desc*) ;
 struct xfrm_algo_desc* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct xfrm_tmpl *VAR_0)
{
 int VAR_1, VAR_2 = 0;

 for (VAR_1 = 0; ; VAR_1++) {
  struct xfrm_algo_desc *VAR_3 = FUNC_1(VAR_1);
  if (!VAR_3)
   break;
  if (FUNC_0(VAR_0, VAR_3) && VAR_3->available)
   VAR_2 += sizeof(struct sadb_comb);
 }
 return VAR_2 + sizeof(struct sadb_prop);
}
