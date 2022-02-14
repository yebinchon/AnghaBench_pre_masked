
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int command; } ;
struct TYPE_5__ {scalar_t__ ccb; } ;
struct TYPE_8__ {TYPE_3__ ata; TYPE_1__ atapi; } ;
struct ata_request {int flags; int transfersize; TYPE_4__ u; int parent; int unit; } ;
struct TYPE_6__ {int (* tf_write ) (struct ata_request*) ;} ;
struct ata_channel {TYPE_2__ hw; } ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct ata_channel*,int ) ;
 int FUNC_2 (struct ata_channel*,int ,int) ;
 int FUNC_3 (struct ata_channel*,int ,int *,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ata_channel*,int ,int ) ;
 struct ata_channel* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct ata_request*) ;

int
FUNC_9(struct ata_request *VAR_24)
{
    struct ata_channel *VAR_25 = FUNC_6(VAR_24->parent);


    FUNC_2(VAR_25, VAR_7, VAR_8 | VAR_9 | FUNC_0(VAR_24->unit));


    if (FUNC_5(VAR_25, VAR_24->unit, 0) < 0) {
 FUNC_7(VAR_24->parent, "timeout waiting to issue command\n");
 VAR_24->flags |= VAR_20;
 return (-1);
    }


    FUNC_2(VAR_25, VAR_3, VAR_1);

    if (VAR_24->flags & VAR_16) {
 int VAR_26 = 5000;
 int VAR_27;


 if (VAR_24->flags & VAR_19) {
     FUNC_2(VAR_25, VAR_10, VAR_11);
     FUNC_2(VAR_25, VAR_4, 0);
     FUNC_2(VAR_25, VAR_5, 0);
 }
 else {
     FUNC_2(VAR_25, VAR_10, 0);
     FUNC_2(VAR_25, VAR_4, VAR_24->transfersize);
     FUNC_2(VAR_25, VAR_5, VAR_24->transfersize >> 8);
 }
 FUNC_2(VAR_25, VAR_2, VAR_15);


 if (VAR_24->flags & VAR_18)
     return (0);


 VAR_27 = FUNC_5(VAR_25, VAR_24->unit, 0);
 if (VAR_27 != 0) {
     if (VAR_27 < 0) {
      FUNC_7(VAR_24->parent,
   "timeout waiting for PACKET command\n");
      VAR_24->flags |= VAR_20;
     }
     return (-1);
 }

 while (VAR_26--) {
     int VAR_28 = FUNC_1(VAR_25, VAR_12);
     int VAR_29 = FUNC_1(VAR_25, VAR_21);

     if (((VAR_28 & (VAR_13 | VAR_14)) |
   (VAR_29 & (VAR_23 | VAR_22))) == VAR_0)
  break;
     FUNC_4(20);
 }
 if (VAR_26 <= 0) {
     FUNC_7(VAR_24->parent,
  "timeout waiting for ATAPI ready\n");
     VAR_24->flags |= VAR_20;
     return (-1);
 }


 FUNC_4(10);


 FUNC_3(VAR_25, VAR_6, (int16_t *)VAR_24->u.atapi.ccb,
      (VAR_24->flags & VAR_17) ? 8 : 6);
    }
    else {
 VAR_25->hw.tf_write(VAR_24);


 FUNC_2(VAR_25, VAR_2, VAR_24->u.ata.command);
    }
    return (0);
}
