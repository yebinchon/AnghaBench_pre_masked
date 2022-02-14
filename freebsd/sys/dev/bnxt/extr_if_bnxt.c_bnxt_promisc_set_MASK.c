
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int rx_mask; } ;
struct bnxt_softc {TYPE_4__ vnic_info; } ;
typedef TYPE_1__* if_t ;
typedef int if_ctx_t ;
struct TYPE_5__ {int if_flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bnxt_softc*,TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ) ;
 struct bnxt_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(if_ctx_t VAR_6, int VAR_7)
{
 struct bnxt_softc *VAR_8 = FUNC_3(VAR_6);
 if_t VAR_9 = FUNC_2(VAR_6);
 int VAR_10;

 if (VAR_9->if_flags & VAR_4 ||
     FUNC_1(VAR_9) > VAR_0)
  VAR_8->vnic_info.rx_mask |=
      VAR_1;
 else
  VAR_8->vnic_info.rx_mask &=
      ~VAR_1;

 if (VAR_9->if_flags & VAR_5)
  VAR_8->vnic_info.rx_mask |=
      VAR_3 |
      VAR_2;
 else
  VAR_8->vnic_info.rx_mask &=
      ~(VAR_3 |
      VAR_2);

 VAR_10 = FUNC_0(VAR_8, &VAR_8->vnic_info);

 return VAR_10;
}
