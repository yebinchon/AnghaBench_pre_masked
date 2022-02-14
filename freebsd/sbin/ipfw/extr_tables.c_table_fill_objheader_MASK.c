
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int set; int tablename; } ;
typedef TYPE_1__ ipfw_xtable_info ;
struct TYPE_6__ {int idx; int ntlv; } ;
typedef TYPE_2__ ipfw_obj_header ;


 int FUNC_0 (int *,int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(ipfw_obj_header *VAR_0, ipfw_xtable_info *VAR_1)
{

 VAR_0->idx = 1;
 FUNC_0(&VAR_0->ntlv, VAR_1->tablename, VAR_1->set, 1);
}
