
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_4__ {scalar_t__ mf_server; int mf_info; } ;
typedef TYPE_1__ mntfs ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,int *,int ) ;
 scalar_t__ FUNC_2 (int ,char) ;

__attribute__((used)) static int
FUNC_3(mntfs *VAR_1)
{
  u_short VAR_2;

  if (FUNC_2(VAR_1->mf_info, ':') == 0)
    return VAR_0;
  if (VAR_1->mf_server)





    FUNC_1(VAR_1->mf_server, &VAR_2, FUNC_0(VAR_1));

  return 0;
}
