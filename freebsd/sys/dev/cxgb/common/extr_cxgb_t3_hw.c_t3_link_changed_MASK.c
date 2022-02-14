
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct link_config {int link_ok; int speed; int duplex; int fc; int requested_fc; scalar_t__ autoneg; } ;
struct TYPE_15__ {int link_faults; } ;
struct cmac {scalar_t__ was_reset; scalar_t__ offset; TYPE_2__ stats; } ;
struct cphy {int rst; TYPE_1__* ops; } ;
struct port_info {scalar_t__ link_fault; int port_id; struct link_config link_config; struct cmac mac; struct cphy phy; } ;
struct TYPE_16__ {int nports; scalar_t__ rev; } ;
struct TYPE_17__ {TYPE_3__ params; } ;
typedef TYPE_4__ adapter_t ;
struct TYPE_14__ {int (* reset ) (struct cphy*,int ) ;int (* get_link_status ) (struct cphy*,int*,int*,int*,int*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 void* VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 struct port_info* FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (struct cphy*,int*,int*,int*,int*) ;
 int FUNC_2 (struct cphy*,int ) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (struct cmac*,int) ;
 int FUNC_6 (struct cmac*,int) ;
 int FUNC_7 (struct cmac*,int,int,int) ;
 int FUNC_8 (TYPE_4__*,int,int,int,int,int,scalar_t__) ;
 int FUNC_9 (TYPE_4__*,scalar_t__,int,int) ;
 int FUNC_10 (TYPE_4__*,scalar_t__,int) ;
 int FUNC_11 (TYPE_4__*,int ) ;
 int FUNC_12 (struct cmac*) ;
 int FUNC_13 (struct cmac*) ;
 scalar_t__ FUNC_14 (TYPE_4__*) ;

void FUNC_15(adapter_t *VAR_26, int VAR_27)
{
 int VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
 struct port_info *VAR_34 = FUNC_0(VAR_26, VAR_27);
 struct cphy *VAR_35 = &VAR_34->phy;
 struct cmac *VAR_36 = &VAR_34->mac;
 struct link_config *VAR_37 = &VAR_34->link_config;

 VAR_28 = VAR_37->link_ok;
 VAR_29 = VAR_37->speed;
 VAR_30 = VAR_37->duplex;
 VAR_31 = VAR_37->fc;
 VAR_32 = 0;

 VAR_35->ops->get_link_status(VAR_35, &VAR_33, &VAR_29, &VAR_30, &VAR_31);
 VAR_28 = (VAR_33 == VAR_23);
 if (VAR_33 != VAR_22)
  VAR_35->rst = 0;
 else if (++VAR_35->rst == 3) {
  VAR_35->ops->reset(VAR_35, 0);
  VAR_35->rst = 0;
 }

 if (VAR_28 == 0)
  VAR_34->link_fault = VAR_15;

 if (VAR_37->requested_fc & VAR_19)
  VAR_31 &= VAR_37->requested_fc;
 else
  VAR_31 = VAR_37->requested_fc & (VAR_20 | VAR_21);


 if (VAR_28 && VAR_29 >= 0 && VAR_37->autoneg == VAR_0 &&
     (VAR_29 != VAR_37->speed || VAR_30 != VAR_37->duplex || VAR_31 != VAR_37->fc))
  FUNC_7(VAR_36, VAR_29, VAR_30, VAR_31);






 if (VAR_26->params.nports <= 2 &&
     ((VAR_34->link_fault && VAR_28) || (!VAR_37->link_ok && VAR_28))) {

  VAR_32 = FUNC_4(VAR_26, VAR_27);
  if (VAR_32) {
   if (VAR_34->link_fault != VAR_16) {
    VAR_36->stats.link_faults++;
    VAR_34->link_fault = VAR_16;
   }

   if (FUNC_14(VAR_26)) {
    if (VAR_26->params.rev >= VAR_25)
     FUNC_13(VAR_36);
    else
     FUNC_12(VAR_36);
   }


   VAR_28 = 0;
  } else {

   if (VAR_34->link_fault == VAR_14 &&
       VAR_28 && VAR_37->link_ok)
    FUNC_3(VAR_26, VAR_27);

   VAR_34->link_fault = VAR_15;
  }
 }

 if (VAR_28 == VAR_37->link_ok && VAR_29 == VAR_37->speed &&
     VAR_30 == VAR_37->duplex && VAR_31 == VAR_37->fc)
  return;

 VAR_37->link_ok = (unsigned char)VAR_28;
 VAR_37->speed = VAR_29 < 0 ? VAR_24 : VAR_29;
 VAR_37->duplex = VAR_30 < 0 ? VAR_7 : VAR_30;
 VAR_37->fc = VAR_31;

 if (VAR_28) {



  if (VAR_26->params.rev > 0 && FUNC_14(VAR_26)) {

   if (VAR_26->params.rev >= VAR_25)
    FUNC_13(VAR_36);
   else
    FUNC_12(VAR_36);

   FUNC_10(VAR_26, VAR_6 + VAR_36->offset,
         VAR_11 | VAR_10);
  }


  FUNC_9(VAR_26, VAR_4 + VAR_36->offset,
     VAR_9, 0);

  FUNC_6(VAR_36, VAR_18 | VAR_17);
  FUNC_9(VAR_26, VAR_3 + VAR_36->offset,
     VAR_8, 1);
  FUNC_3(VAR_26, VAR_27);

 } else {



  if (VAR_26->params.rev > 0 && FUNC_14(VAR_26)) {
   FUNC_10(VAR_26,
         VAR_6 + VAR_36->offset, 0);
  }

  FUNC_11(VAR_26, VAR_34->port_id);
  if (VAR_26->params.nports <= 2) {
   FUNC_9(VAR_26,
      VAR_1 + VAR_36->offset,
      VAR_13, 0);

   FUNC_5(VAR_36, VAR_17);





   FUNC_9(VAR_26,
       VAR_4 + VAR_36->offset, 0, VAR_9);
   FUNC_10(VAR_26, VAR_2 + VAR_36->offset, 0);
   FUNC_10(VAR_26,
       VAR_5 + VAR_36->offset, VAR_12);
   FUNC_10(VAR_26,
       VAR_2 + VAR_36->offset, VAR_10);
  }
 }

 FUNC_8(VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31,
     VAR_36->was_reset);
 VAR_36->was_reset = 0;
}
