
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
struct sc_info {int pch_cnt; int rch_cnt; TYPE_1__* rch; TYPE_2__* pch; int * savemem; } ;
typedef int device_t ;
struct TYPE_4__ {scalar_t__ active; } ;
struct TYPE_3__ {scalar_t__ active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sc_info*) ;
 int FUNC_2 (struct sc_info*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct sc_info*) ;
 int FUNC_5 (struct sc_info*) ;
 int FUNC_6 (struct sc_info*) ;
 int FUNC_7 (struct sc_info*) ;
 int FUNC_8 (struct sc_info*) ;
 int FUNC_9 (int *,TYPE_2__*,int ) ;
 int FUNC_10 (struct sc_info*,int ) ;
 int FUNC_11 (int *,TYPE_1__*,int ) ;
 int FUNC_12 (struct sc_info*,int ,int) ;
 int FUNC_13 (struct sc_info*,int,int ) ;
 int FUNC_14 (struct sc_info*,int,int ) ;
 int FUNC_15 (int ) ;
 struct sc_info* FUNC_16 (int ) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_10)
{
 struct sc_info *VAR_11 = FUNC_16(VAR_10);
 int VAR_12, VAR_13 = 0;
 u_int8_t VAR_14;

 FUNC_0(VAR_0, ("m3_pci_resume\n"));

 FUNC_1(VAR_11);

 FUNC_10(VAR_11, 0);

 FUNC_7(VAR_11);

 VAR_14 = FUNC_5(VAR_11);

 FUNC_6(VAR_11);


 for (VAR_12 = VAR_6; VAR_12 <= VAR_7; VAR_12++)
  FUNC_13(VAR_11, VAR_12, VAR_11->savemem[VAR_13++]);
 for (VAR_12 = VAR_8; VAR_12 <= VAR_9; VAR_12++)
  FUNC_14(VAR_11, VAR_12, VAR_11->savemem[VAR_13++]);


 FUNC_14(VAR_11, VAR_3, 0);


 FUNC_12(VAR_11, VAR_1, VAR_14 | VAR_5);

 FUNC_4(VAR_11);

 FUNC_8(VAR_11);

 FUNC_2(VAR_11);
 if (FUNC_15(VAR_10) == -1) {
  FUNC_3(VAR_10, "unable to reinitialize the mixer\n");
  return (VAR_2);
 }
 FUNC_1(VAR_11);


 for (VAR_12=0 ; VAR_12<VAR_11->pch_cnt ; VAR_12++) {
  if (VAR_11->pch[VAR_12].active) {
   FUNC_9(((void*)0), &VAR_11->pch[VAR_12],
       VAR_4);
  }
 }
 for (VAR_12=0 ; VAR_12<VAR_11->rch_cnt ; VAR_12++) {
  if (VAR_11->rch[VAR_12].active) {
   FUNC_11(((void*)0), &VAR_11->rch[VAR_12],
       VAR_4);
  }
 }

 FUNC_2(VAR_11);
 return 0;
}
