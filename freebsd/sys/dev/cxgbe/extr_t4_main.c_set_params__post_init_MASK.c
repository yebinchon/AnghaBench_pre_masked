
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int port_caps32; } ;
struct adapter {TYPE_1__ params; int pf; int mbox; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int*) ;
 int FUNC_12 (struct adapter*,scalar_t__) ;
 scalar_t__ FUNC_13 (struct adapter*,int ,int ,int ,int,int*,int*) ;
 int FUNC_14 (struct adapter*,scalar_t__,int,int) ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int* VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_15 (struct adapter*,scalar_t__) ;

__attribute__((used)) static int
FUNC_16(struct adapter *VAR_26)
{
 uint32_t VAR_27, VAR_28;





 VAR_27 = FUNC_0(VAR_7);
 VAR_28 = 1;
 (void)FUNC_13(VAR_26, VAR_26->mbox, VAR_26->pf, 0, 1, &VAR_27, &VAR_28);


 VAR_27 = FUNC_0(VAR_18);
 VAR_28 = 1;
 if (FUNC_13(VAR_26, VAR_26->mbox, VAR_26->pf, 0, 1, &VAR_27, &VAR_28) == 0)
  VAR_26->params.port_caps32 = 1;


 VAR_28 = 1 << (FUNC_1(FUNC_12(VAR_26, VAR_2)) - 1);
 FUNC_14(VAR_26, VAR_2, FUNC_6(VAR_12),
     FUNC_6(VAR_28 - 1));
 return (0);
}
