
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef int u16 ;
struct qlnxr_dev {TYPE_1__* ha; } ;
struct TYPE_2__ {int primary_mac; int ifp; } ;
typedef TYPE_1__ qlnx_host_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct qlnxr_dev*,int ) ;
 int FUNC_2 (struct qlnxr_dev*,union ib_gid*) ;
 int FUNC_3 (union ib_gid*,int ,int,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct qlnxr_dev *VAR_0)
{
 qlnx_host_t *VAR_1 = VAR_0->ha;
 u16 VAR_2;
 bool VAR_3;
 union ib_gid VAR_4;

 FUNC_1(VAR_0, VAR_1->ifp);

 VAR_3 = FUNC_0(VAR_1->ifp);
        VAR_2 = (VAR_3) ? FUNC_4(VAR_1->ifp) : 0;
 FUNC_3(&VAR_4, VAR_1->primary_mac, VAR_3, VAR_2);
 FUNC_2(VAR_0, &VAR_4);
}
