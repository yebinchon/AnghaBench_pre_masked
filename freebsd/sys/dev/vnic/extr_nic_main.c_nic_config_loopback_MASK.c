
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct set_loopback {size_t vf_id; int enable; } ;
struct nicpf {int node; int * vf_lmac_map; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int,int ) ;

__attribute__((used)) static int
FUNC_3(struct nicpf *VAR_2, struct set_loopback *VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_3->vf_id > VAR_1)
  return (VAR_0);

 VAR_4 = FUNC_0(VAR_2->vf_lmac_map[VAR_3->vf_id]);
 VAR_5 = FUNC_1(VAR_2->vf_lmac_map[VAR_3->vf_id]);

 FUNC_2(VAR_2->node, VAR_4, VAR_5, VAR_3->enable);

 return (0);
}
