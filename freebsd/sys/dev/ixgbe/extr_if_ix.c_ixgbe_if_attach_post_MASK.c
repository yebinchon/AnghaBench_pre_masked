
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_hw {int dummy; } ;
struct adapter {scalar_t__ intr_type; int feat_cap; int advertise; scalar_t__ dmac; int * mta; struct ixgbe_hw hw; } ;
typedef int if_ctx_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;
 struct adapter* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct adapter*) ;
 int VAR_9 ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (int ,int*) ;
 int FUNC_7 (struct ixgbe_hw*) ;
 int FUNC_8 (struct adapter*) ;
 int FUNC_9 (struct adapter*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct adapter*) ;
 int FUNC_12 (struct adapter*,int ) ;
 int FUNC_13 (struct ixgbe_hw*,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct adapter*) ;
 int * FUNC_16 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_17(if_ctx_t VAR_10)
{
 device_t VAR_11;
 struct adapter *VAR_12;
 struct ixgbe_hw *VAR_13;
 int VAR_14 = 0;

 VAR_11 = FUNC_1(VAR_10);
 VAR_12 = FUNC_2(VAR_10);
 VAR_13 = &VAR_12->hw;


 if (VAR_12->intr_type == VAR_2 &&
  (VAR_12->feat_cap & VAR_3) == 0) {
  FUNC_0(VAR_11, "Device does not support legacy interrupts");
  VAR_14 = VAR_1;
  goto err;
 }


 VAR_12->mta = FUNC_16(sizeof(*VAR_12->mta) *
                       VAR_5, VAR_6, VAR_7);
 if (VAR_12->mta == ((void*)0)) {
  FUNC_0(VAR_11, "Can not allocate multicast setup array\n");
  VAR_14 = VAR_0;
  goto err;
 }


 FUNC_12(VAR_12, VAR_9);


 FUNC_7(VAR_13);


 FUNC_13(VAR_13, VAR_8);

 FUNC_11(VAR_12);

 VAR_14 = FUNC_14(VAR_10);
 if (VAR_14) {
  FUNC_0(VAR_11, "Interface setup failed: %d\n", VAR_14);
  goto err;
 }

 FUNC_10(VAR_10);


 FUNC_15(VAR_12);
 FUNC_4(VAR_12);


 FUNC_9(VAR_12);





 FUNC_5(VAR_12);


 VAR_12->dmac = 0;

 VAR_12->advertise = FUNC_8(VAR_12);

 if (VAR_12->feat_cap & VAR_4)
  FUNC_6(VAR_11, &VAR_14);


 FUNC_3(VAR_10);

 return (0);
err:
 return (VAR_14);
}
