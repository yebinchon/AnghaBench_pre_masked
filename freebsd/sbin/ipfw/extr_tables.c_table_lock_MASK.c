
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xi ;
struct TYPE_4__ {int flags; int mflags; } ;
typedef TYPE_1__ ipfw_xtable_info ;
typedef int ipfw_obj_header ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(ipfw_obj_header *VAR_3, int VAR_4)
{
 ipfw_xtable_info VAR_5;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));

 VAR_5.mflags |= VAR_2;
 VAR_5.flags |= (VAR_4 != 0) ? VAR_1 : 0;

 if (FUNC_2(VAR_3, &VAR_5) != 0)
  FUNC_0(VAR_0, "Table %s failed", VAR_4 != 0 ? "lock" : "unlock");
}
