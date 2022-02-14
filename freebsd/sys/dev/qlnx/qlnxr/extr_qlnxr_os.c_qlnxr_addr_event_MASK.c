
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef int u16 ;
struct qlnxr_dev {TYPE_1__* ha; } ;
struct ifnet {int dummy; } ;
struct TYPE_2__ {int primary_mac; int ifp; } ;




 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qlnxr_dev*,union ib_gid*) ;
 int FUNC_3 (union ib_gid*,int ,int,int) ;
 int FUNC_4 (struct qlnxr_dev*,union ib_gid*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6 (struct qlnxr_dev *VAR_0,
    unsigned long VAR_1,
    struct ifnet *VAR_2,
    union ib_gid *VAR_3)
{
 bool VAR_4 = 0;
 union ib_gid VAR_5;
 u16 VAR_6 = 0xffff;

 FUNC_0(VAR_0->ha, "Link event occured\n");
 VAR_4 = FUNC_1(VAR_0->ha->ifp);
 VAR_6 = (VAR_4) ? FUNC_5(VAR_0->ha->ifp) : 0;

 switch (VAR_1) {
 case 128 :
  FUNC_2(VAR_0, VAR_3);
  if (VAR_4) {
   FUNC_3(&VAR_5, VAR_0->ha->primary_mac, VAR_4, VAR_6);
   FUNC_2(VAR_0, &VAR_5);
  }
  break;
 case 129 :
  FUNC_4(VAR_0, VAR_3);
  if (VAR_4) {
   FUNC_3(&VAR_5, VAR_0->ha->primary_mac, VAR_4, VAR_6);
   FUNC_4(VAR_0, &VAR_5);
  }
  break;
 default :
  break;
 }
 return 1;
}
