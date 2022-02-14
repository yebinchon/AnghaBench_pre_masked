
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sc_info {int pch_cnt; int rch_cnt; int * savemem; TYPE_1__* rch; TYPE_2__* pch; } ;
typedef int device_t ;
struct TYPE_4__ {scalar_t__ active; } ;
struct TYPE_3__ {scalar_t__ active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct sc_info*) ;
 int FUNC_3 (struct sc_info*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct sc_info*) ;
 int FUNC_5 (int *,TYPE_2__*,int ) ;
 int FUNC_6 (struct sc_info*,int) ;
 int FUNC_7 (int *,TYPE_1__*,int ) ;
 int FUNC_8 (struct sc_info*,int) ;
 int FUNC_9 (struct sc_info*,int) ;
 int FUNC_10 (struct sc_info*,int ,int ) ;
 int FUNC_11 (struct sc_info*,int ,int ) ;
 struct sc_info* FUNC_12 (int ) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_8)
{
 struct sc_info *VAR_9 = FUNC_12(VAR_8);
 int VAR_10, VAR_11 = 0;

        FUNC_1(VAR_1, ("m3_pci_suspend\n"));

 FUNC_2(VAR_9);
 for (VAR_10=0 ; VAR_10<VAR_9->pch_cnt ; VAR_10++) {
  if (VAR_9->pch[VAR_10].active) {
   FUNC_5(((void*)0), &VAR_9->pch[VAR_10],
       VAR_3);
  }
 }
 for (VAR_10=0 ; VAR_10<VAR_9->rch_cnt ; VAR_10++) {
  if (VAR_9->rch[VAR_10].active) {
   FUNC_7(((void*)0), &VAR_9->rch[VAR_10],
       VAR_3);
  }
 }
 FUNC_0(10 * 1000);


 FUNC_11(VAR_9, VAR_2, 0);
 FUNC_10(VAR_9, VAR_0, 0);

 FUNC_4(VAR_9);


 for (VAR_10 = VAR_4; VAR_10 <= VAR_5; VAR_10++)
  VAR_9->savemem[VAR_11++] = FUNC_8(VAR_9, VAR_10);
 for (VAR_10 = VAR_6; VAR_10 <= VAR_7; VAR_10++)
  VAR_9->savemem[VAR_11++] = FUNC_9(VAR_9, VAR_10);


 FUNC_6(VAR_9, 3);
 FUNC_3(VAR_9);

 return 0;
}
