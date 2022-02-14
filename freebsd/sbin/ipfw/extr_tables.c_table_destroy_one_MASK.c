
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int set; int tablename; } ;
typedef TYPE_1__ ipfw_xtable_info ;
struct TYPE_7__ {int ntlv; } ;
typedef TYPE_2__ ipfw_obj_header ;
struct TYPE_8__ {scalar_t__ do_quiet; } ;


 TYPE_5__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(ipfw_xtable_info *VAR_1, void *VAR_2)
{
 ipfw_obj_header *VAR_3;

 VAR_3 = (ipfw_obj_header *)VAR_2;
 FUNC_1(&VAR_3->ntlv, VAR_1->tablename, VAR_1->set, 1);
 if (FUNC_0(VAR_3) != 0) {
  if (VAR_0.do_quiet == 0)
   FUNC_2("failed to destroy table(%s) in set %u",
       VAR_1->tablename, VAR_1->set);
  return (-1);
 }
 return (0);
}
