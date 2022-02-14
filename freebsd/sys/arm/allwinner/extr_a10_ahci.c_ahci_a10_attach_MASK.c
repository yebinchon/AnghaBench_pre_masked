
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahci_controller {int numirqs; int r_mem; scalar_t__ r_rid; int ch_start; scalar_t__ msi; scalar_t__ subdeviceid; scalar_t__ subvendorid; scalar_t__ deviceid; scalar_t__ vendorid; int quirks; } ;
typedef int device_t ;
typedef int * clk_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,scalar_t__*,int ) ;
 int FUNC_3 (int ,int ,scalar_t__,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int,int **) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;
 struct ahci_controller* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_7)
{
 int VAR_8;
 struct ahci_controller *VAR_9;
 clk_t VAR_10, VAR_11;

 VAR_9 = FUNC_8(VAR_7);
 VAR_10 = VAR_11 = ((void*)0);

 VAR_9->quirks = VAR_0;
 VAR_9->vendorid = 0;
 VAR_9->deviceid = 0;
 VAR_9->subvendorid = 0;
 VAR_9->subdeviceid = 0;
 VAR_9->r_rid = 0;
 if (!(VAR_9->r_mem = FUNC_2(VAR_7, VAR_5,
     &VAR_9->r_rid, VAR_4)))
  return (VAR_2);


 VAR_8 = FUNC_5(VAR_7, 0, 0, &VAR_11);
 if (VAR_8 != 0) {
  FUNC_9(VAR_7, "Cannot get gate clock\n");
  goto fail;
 }
 VAR_8 = FUNC_5(VAR_7, 0, 1, &VAR_10);
 if (VAR_8 != 0) {
  FUNC_9(VAR_7, "Cannot get PLL clock\n");
  goto fail;
 }
 VAR_8 = FUNC_7(VAR_10, VAR_3, VAR_1);
 if (VAR_8 != 0) {
  FUNC_9(VAR_7, "Cannot set PLL frequency\n");
  goto fail;
 }
 VAR_8 = FUNC_4(VAR_10);
 if (VAR_8 != 0) {
  FUNC_9(VAR_7, "Cannot enable PLL\n");
  goto fail;
 }
 VAR_8 = FUNC_4(VAR_11);
 if (VAR_8 != 0) {
  FUNC_9(VAR_7, "Cannot enable clk gate\n");
  goto fail;
 }


 if ((VAR_8 = FUNC_0(VAR_7)) != 0)
  goto fail;




 VAR_9->msi = 0;
 VAR_9->numirqs = 1;


 VAR_9->ch_start = VAR_6;




 return (FUNC_1(VAR_7));

fail:
 if (VAR_11 != ((void*)0))
  FUNC_6(VAR_11);
 if (VAR_10 != ((void*)0))
  FUNC_6(VAR_10);
 FUNC_3(VAR_7, VAR_5, VAR_9->r_rid, VAR_9->r_mem);
 return (VAR_8);
}
