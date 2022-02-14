
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct mpr_softc {int mpr_flags; TYPE_2__* sassc; TYPE_1__* facts; } ;
struct TYPE_4__ {int mprsas_eh; } ;
struct TYPE_3__ {scalar_t__ MsgVersion; } ;


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
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct mpr_softc*,int *,int ,int *,int *) ;
 int VAR_19 ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(struct mpr_softc *VAR_20)
{
 uint8_t VAR_21[16];

 FUNC_0(VAR_21, 16);
 FUNC_2(VAR_21, VAR_10);
 FUNC_2(VAR_21, VAR_11);
 FUNC_2(VAR_21, VAR_8);
 FUNC_2(VAR_21, VAR_13);
 FUNC_2(VAR_21, VAR_14);
 FUNC_2(VAR_21, VAR_15);
 FUNC_2(VAR_21, VAR_12);
 FUNC_2(VAR_21, VAR_1);
 FUNC_2(VAR_21, VAR_4);
 FUNC_2(VAR_21, VAR_3);
 FUNC_2(VAR_21, VAR_2);
 FUNC_2(VAR_21, VAR_16);
 FUNC_2(VAR_21, VAR_9);
 if (VAR_20->facts->MsgVersion >= VAR_17) {
  FUNC_2(VAR_21, VAR_0);
  if (VAR_20->mpr_flags & VAR_18) {
   FUNC_2(VAR_21, VAR_5);
   FUNC_2(VAR_21, VAR_6);
   FUNC_2(VAR_21, VAR_7);
  }
 }

 FUNC_1(VAR_20, VAR_21, VAR_19, ((void*)0),
     &VAR_20->sassc->mprsas_eh);

 return (0);
}
