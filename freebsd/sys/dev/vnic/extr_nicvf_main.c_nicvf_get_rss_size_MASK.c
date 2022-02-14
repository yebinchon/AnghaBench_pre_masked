
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vf_id; int msg; } ;
union nic_mbx {TYPE_1__ rss_size; } ;
struct nicvf {int vf_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct nicvf*,union nic_mbx*) ;

__attribute__((used)) static void
FUNC_1(struct nicvf *VAR_1)
{
 union nic_mbx VAR_2 = {};

 VAR_2.rss_size.msg = VAR_0;
 VAR_2.rss_size.vf_id = VAR_1->vf_id;
 FUNC_0(VAR_1, &VAR_2);
}
