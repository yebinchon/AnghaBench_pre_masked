
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ u32 ;
typedef TYPE_1__* hcb_p ;
typedef TYPE_2__* ccb_p ;
struct TYPE_10__ {int host_status; } ;
struct TYPE_9__ {int rv_ctest3; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;
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
 TYPE_2__* FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_16 ;

__attribute__((used)) static void FUNC_8 (hcb_p VAR_17, u_char VAR_18)
{
 u32 VAR_19 = FUNC_0 (VAR_10);
 u32 VAR_20 = FUNC_0 (VAR_9);
 ccb_p VAR_21 = FUNC_6(VAR_17, VAR_20);






 if ((!(VAR_19 > FUNC_4 (VAR_17, VAR_6) &&
        VAR_19 < FUNC_4 (VAR_17, VAR_7) + 1)) &&
     (!(VAR_19 > FUNC_4 (VAR_17, VAR_16) &&
        VAR_19 < FUNC_4 (VAR_17, VAR_12) + 1)) &&
     (!(VAR_19 > FUNC_5 (VAR_17, VAR_13) &&
        VAR_19 < FUNC_5 (VAR_17, VAR_14) + 1)) &&
     (!(VAR_19 > FUNC_4 (VAR_17, VAR_4) &&
        VAR_19 < FUNC_4 (VAR_17, VAR_5) + 1))) {
  FUNC_1 (VAR_8, VAR_17->rv_ctest3 | VAR_0);
  FUNC_1 (VAR_11, VAR_2|VAR_1);






  if (VAR_21) {
   VAR_21->host_status = VAR_18;
   FUNC_3 (FUNC_4 (VAR_17, VAR_3));
  }



  else {
   FUNC_2 (VAR_9, 0xffffff);
   FUNC_3 (FUNC_4 (VAR_17, VAR_15));
  }
 }
 else
  goto reset_all;

 return;

reset_all:
 FUNC_7(VAR_17);
}
