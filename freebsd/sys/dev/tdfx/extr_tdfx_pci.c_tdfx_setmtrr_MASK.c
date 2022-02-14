
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {int mr_len; int mr_base; int mr_flags; int mr_owner; } ;
struct tdfx_softc {int addr0; int addr1; TYPE_1__ mrdesc; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,int *,int) ;
 struct tdfx_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (TYPE_1__*,int*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_7) {






 int VAR_8 = 0, VAR_9;
 struct tdfx_softc *VAR_10 = FUNC_1(VAR_7);


 if((FUNC_4(VAR_7) == VAR_4) || (FUNC_4(VAR_7) ==
   VAR_5)) {
  VAR_10->mrdesc.mr_len = 0x400000;



  VAR_10->mrdesc.mr_base = VAR_10->addr0 & 0xfffe0000;
 }
 else if((FUNC_4(VAR_7) == VAR_6) ||
   (FUNC_4(VAR_7) == VAR_3)) {
  VAR_10->mrdesc.mr_len = 0x1000000;



  VAR_10->mrdesc.mr_base = VAR_10->addr1 & 0xfffe0000;
 }
 else
   return 0;







 VAR_10->mrdesc.mr_flags = VAR_1;
 FUNC_0("tdfx", &VAR_10->mrdesc.mr_owner, 4);
 VAR_9 = VAR_2;
 VAR_8 = FUNC_3(&VAR_10->mrdesc, &VAR_9);

 if(VAR_8 == 0) {



 } else if((FUNC_4(VAR_7) == VAR_5) ||
  (FUNC_4(VAR_7) == VAR_4)) {



  VAR_10->mrdesc.mr_flags = VAR_0;

  VAR_10->mrdesc.mr_len = 0x1000;
 }






 return 0;
}
