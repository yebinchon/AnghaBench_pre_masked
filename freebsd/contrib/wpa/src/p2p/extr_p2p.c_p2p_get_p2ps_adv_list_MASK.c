
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2ps_advertisement {int dummy; } ;
struct p2p_data {struct p2ps_advertisement* p2ps_adv_list; } ;



struct p2ps_advertisement * FUNC_0(struct p2p_data *VAR_0)
{
 return VAR_0 ? VAR_0->p2ps_adv_list : ((void*)0);
}
