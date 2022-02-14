
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ifnet {int dummy; } ;
struct TYPE_9__ {int pci_cmd_word; } ;
struct TYPE_8__ {scalar_t__ type; } ;
struct TYPE_10__ {scalar_t__ revision_id; TYPE_2__ bus; TYPE_1__ mac; } ;
struct adapter {TYPE_3__ hw; int * mta; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 int VAR_6 ;
 int FUNC_3 (int *,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int *,int) ;
 int VAR_8 ;
 int FUNC_7 (struct ifnet*,int ,int *) ;
 struct ifnet* FUNC_8 (int ) ;
 struct adapter* FUNC_9 (int ) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void
FUNC_11(if_ctx_t VAR_9)
{
 struct adapter *VAR_10 = FUNC_9(VAR_9);
 struct ifnet *VAR_11 = FUNC_8(VAR_9);
 u32 VAR_12 = 0;
 u8 *VAR_13;
 int VAR_14 = 0;

 FUNC_2("em_set_multi: begin");

 VAR_13 = VAR_10->mta;
 FUNC_3(VAR_13, sizeof(u8) * VAR_5 * VAR_6);

 if (VAR_10->hw.mac.type == VAR_7 &&
     VAR_10->hw.revision_id == VAR_4) {
  VAR_12 = FUNC_0(&VAR_10->hw, VAR_1);
  if (VAR_10->hw.bus.pci_cmd_word & VAR_0)
   FUNC_4(&VAR_10->hw);
  VAR_12 |= VAR_3;
  FUNC_1(&VAR_10->hw, VAR_1, VAR_12);
  FUNC_10(5);
 }

 VAR_14 = FUNC_7(VAR_11, VAR_8, VAR_13);

 if (VAR_14 >= VAR_6) {
  VAR_12 = FUNC_0(&VAR_10->hw, VAR_1);
  VAR_12 |= VAR_2;
  FUNC_1(&VAR_10->hw, VAR_1, VAR_12);
 } else
  FUNC_6(&VAR_10->hw, VAR_13, VAR_14);

 if (VAR_10->hw.mac.type == VAR_7 &&
     VAR_10->hw.revision_id == VAR_4) {
  VAR_12 = FUNC_0(&VAR_10->hw, VAR_1);
  VAR_12 &= ~VAR_3;
  FUNC_1(&VAR_10->hw, VAR_1, VAR_12);
  FUNC_10(5);
  if (VAR_10->hw.bus.pci_cmd_word & VAR_0)
   FUNC_5(&VAR_10->hw);
 }
}
