
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct octeon_device {int dummy; } ;
struct TYPE_2__ {int hw_addr; } ;
struct lio {int intf_open; TYPE_1__ linfo; struct octeon_device* oct_dev; struct ifnet* ifp; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct ifnet*) ;
 int VAR_2 ;
 int FUNC_1 (struct ifnet*,int ,int ) ;
 int FUNC_2 (struct octeon_device*,char*,int) ;
 int FUNC_3 (struct octeon_device*,char*) ;
 int FUNC_4 (struct lio*,int ) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (struct lio*,int) ;
 int FUNC_7 (struct ifnet*,int *) ;
 int FUNC_8 (int *,int *,int) ;

void
FUNC_9(void *VAR_3)
{
 struct lio *VAR_4 = VAR_3;
 struct ifnet *VAR_5 = VAR_4->ifp;
 struct octeon_device *VAR_6 = VAR_4->oct_dev;
 uint8_t *VAR_7, VAR_8[VAR_0];
 int VAR_9 = 0;

 FUNC_4(VAR_4, VAR_2);


 VAR_4->intf_open = 1;

 FUNC_3(VAR_6, "Interface Open, ready for traffic\n");


 FUNC_6(VAR_4, 1);

 VAR_7 = FUNC_0(VAR_5);
 FUNC_8(VAR_8, ((uint8_t *)&VAR_4->linfo.hw_addr) + 2, VAR_0);

 if (FUNC_5(VAR_7, VAR_8)) {
  VAR_9 = FUNC_7(VAR_5, VAR_7);
  if (VAR_9)
   FUNC_2(VAR_6, "MAC change failed, error: %d\n", VAR_9);
 }


 FUNC_1(VAR_5, VAR_1, 0);

 FUNC_3(VAR_6, "Interface is opened\n");
}
