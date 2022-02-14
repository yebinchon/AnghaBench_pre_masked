
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct octeon_device {int device; } ;
struct TYPE_9__ {int mtu; } ;
struct TYPE_10__ {TYPE_2__ s; } ;
struct TYPE_11__ {TYPE_3__ link; } ;
struct TYPE_12__ {int ifm_media; TYPE_1__* ifm_cur; } ;
struct lio {TYPE_4__ linfo; int mtu; TYPE_5__ ifmedia; int ifp; struct octeon_device* oct_dev; } ;
typedef int if_t ;
struct TYPE_8__ {int ifm_media; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (TYPE_5__*,int,int ,int *) ;
 int FUNC_16 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_17 (TYPE_5__*,int) ;
 int FUNC_18 (struct octeon_device*,char*,int ) ;
 int FUNC_19 (struct octeon_device*) ;
 int VAR_25 ;
 int FUNC_20 (struct octeon_device*) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;

__attribute__((used)) static int
FUNC_21(struct lio *VAR_32)
{
 struct octeon_device *VAR_33 = VAR_32->oct_dev;
 if_t VAR_34 = VAR_32->ifp;


 FUNC_16(&VAR_32->ifmedia, VAR_24, VAR_27,
       VAR_26);


 FUNC_15(&VAR_32->ifmedia,
      (VAR_22 | VAR_23 | FUNC_20(VAR_33)),
      0, ((void*)0));
 FUNC_15(&VAR_32->ifmedia, (VAR_22 | VAR_21), 0, ((void*)0));
 FUNC_17(&VAR_32->ifmedia, (VAR_22 | VAR_21));

 VAR_32->ifmedia.ifm_media = VAR_32->ifmedia.ifm_cur->ifm_media;
 FUNC_18(VAR_33, "IFMEDIA flags : %x\n", VAR_32->ifmedia.ifm_media);

 FUNC_3(VAR_34, FUNC_0(VAR_33->device),
      FUNC_1(VAR_33->device));
 FUNC_7(VAR_34, (VAR_18 | VAR_20 | VAR_19));
 FUNC_11(VAR_34, VAR_28);
 FUNC_8(VAR_34, VAR_25);
 FUNC_14(VAR_34, VAR_29);
 FUNC_13(VAR_34, VAR_31);
 FUNC_10(VAR_34, VAR_30);
 FUNC_12(VAR_34, VAR_32->linfo.link.s.mtu);
 VAR_32->mtu = VAR_32->linfo.link.s.mtu;
 FUNC_9(VAR_34, (VAR_0 | VAR_1 | VAR_4 | VAR_3 |
        VAR_2 | VAR_5));

 FUNC_5(VAR_34, (VAR_6 | VAR_7 |
        VAR_12 | VAR_11 |
        VAR_9 | VAR_8 |
        VAR_10 | VAR_14 |
        VAR_13 | VAR_15 |
        VAR_16 | VAR_17), 0);

 FUNC_6(VAR_34, FUNC_2(VAR_34));
 FUNC_4(VAR_34, FUNC_19(VAR_33));

 return (0);
}
