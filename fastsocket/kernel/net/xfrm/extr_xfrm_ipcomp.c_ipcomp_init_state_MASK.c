
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xfrm_state {struct ipcomp_data* data; TYPE_1__* calg; scalar_t__ encap; } ;
struct TYPE_5__ {int threshold; } ;
struct TYPE_6__ {TYPE_2__ comp; } ;
struct xfrm_algo_desc {TYPE_3__ uinfo; } ;
struct ipcomp_data {int threshold; int tfms; } ;
struct TYPE_4__ {int alg_name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ipcomp_data*) ;
 int VAR_3 ;
 int FUNC_4 (struct ipcomp_data*) ;
 struct ipcomp_data* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct xfrm_algo_desc* FUNC_8 (int ,int ) ;

int FUNC_9(struct xfrm_state *VAR_4)
{
 int VAR_5;
 struct ipcomp_data *VAR_6;
 struct xfrm_algo_desc *VAR_7;

 VAR_5 = -VAR_0;
 if (!VAR_4->calg)
  goto out;

 if (VAR_4->encap)
  goto out;

 VAR_5 = -VAR_1;
 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  goto out;

 FUNC_6(&VAR_3);
 if (!FUNC_1())
  goto error;

 VAR_6->tfms = FUNC_2(VAR_4->calg->alg_name);
 if (!VAR_6->tfms)
  goto error;
 FUNC_7(&VAR_3);

 VAR_7 = FUNC_8(VAR_4->calg->alg_name, 0);
 FUNC_0(!VAR_7);
 VAR_6->threshold = VAR_7->uinfo.comp.threshold;
 VAR_4->data = VAR_6;
 VAR_5 = 0;
out:
 return VAR_5;

error:
 FUNC_3(VAR_6);
 FUNC_7(&VAR_3);
 FUNC_4(VAR_6);
 goto out;
}
