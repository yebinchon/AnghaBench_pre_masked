
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* hcb_p ;
struct TYPE_3__ {int sv_scntl0; int sv_scntl3; int sv_dmode; int sv_dcntl; int sv_ctest3; int sv_ctest4; int sv_gpcntl; int sv_stest1; int sv_stest2; int sv_stest4; int features; int sv_scntl4; int sv_ctest5; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
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

__attribute__((used)) static void FUNC_1 (hcb_p VAR_13)
{
 VAR_13->sv_scntl0 = FUNC_0(VAR_7) & 0x0a;
 VAR_13->sv_scntl3 = FUNC_0(VAR_8) & 0x07;
 VAR_13->sv_dmode = FUNC_0(VAR_5) & 0xce;
 VAR_13->sv_dcntl = FUNC_0(VAR_4) & 0xa8;
 VAR_13->sv_ctest3 = FUNC_0(VAR_1) & 0x01;
 VAR_13->sv_ctest4 = FUNC_0(VAR_2) & 0x80;
 VAR_13->sv_gpcntl = FUNC_0(VAR_6);
 VAR_13->sv_stest1 = FUNC_0(VAR_10);
 VAR_13->sv_stest2 = FUNC_0(VAR_11) & 0x20;
 VAR_13->sv_stest4 = FUNC_0(VAR_12);
 if (VAR_13->features & VAR_0) {
  VAR_13->sv_scntl4 = FUNC_0(VAR_9);
  VAR_13->sv_ctest5 = FUNC_0(VAR_3) & 0x04;
 }
 else
  VAR_13->sv_ctest5 = FUNC_0(VAR_3) & 0x24;
}
