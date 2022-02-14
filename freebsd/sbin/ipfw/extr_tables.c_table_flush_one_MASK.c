
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int set; int tablename; } ;
typedef TYPE_1__ ipfw_xtable_info ;
struct TYPE_6__ {int ntlv; } ;
typedef TYPE_2__ ipfw_obj_header ;


 int FUNC_0 (int *,int ,int ,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_2(ipfw_xtable_info *VAR_0, void *VAR_1)
{
 ipfw_obj_header *VAR_2;

 VAR_2 = (ipfw_obj_header *)VAR_1;

 FUNC_0(&VAR_2->ntlv, VAR_0->tablename, VAR_0->set, 1);

 return (FUNC_1(VAR_2));
}
