
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
typedef int u32 ;
typedef TYPE_1__* hcb_p ;
struct TYPE_5__ {int rv_dcntl; int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (char*,char*,...) ;
 char* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(hcb_p VAR_14, int VAR_15)
{
 u32 VAR_16;
 int VAR_17 = 0;

 FUNC_7(VAR_14);
 if (VAR_15)
  FUNC_3 (VAR_10, VAR_3);




 FUNC_2 (VAR_13, VAR_5);
 FUNC_2 (VAR_6, (VAR_14->rv_dcntl & VAR_2));
 FUNC_2 (VAR_9, VAR_0);
 FUNC_4 (200);

 if (!VAR_4)
  goto out;






 VAR_16 = FUNC_0(VAR_11);
 VAR_16 = ((VAR_16 & 2) << 7) + ((VAR_16 & 1) << 17);
 VAR_16 |= ((FUNC_0(VAR_12) & 0x01) << 26) |
  ((FUNC_1(VAR_8) & 0xff) << 9) |
  ((FUNC_1(VAR_8) & 0xff00) << 10) |
  FUNC_0(VAR_7);

 if (!(VAR_14->features & VAR_1))
  VAR_16 &= 0x3ffff;

 if (VAR_16 != (2<<7)) {
  FUNC_5("%s: suspicious SCSI data while resetting the BUS.\n",
   FUNC_6(VAR_14));
  FUNC_5("%s: %sdp0,d7-0,rst,req,ack,bsy,sel,atn,msg,c/d,i/o = "
   "0x%lx, expecting 0x%lx\n",
   FUNC_6(VAR_14),
   (VAR_14->features & VAR_1) ? "dp1,d15-8," : "",
   (u_long)VAR_16, (u_long)(2<<7));
  if (VAR_4 == 1)
   VAR_17 = 1;
 }
out:
 FUNC_2 (VAR_9, 0);

 return VAR_17;
}
