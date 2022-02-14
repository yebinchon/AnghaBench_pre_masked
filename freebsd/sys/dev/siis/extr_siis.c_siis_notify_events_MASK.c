
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct siis_channel {int quirks; int path; scalar_t__ pm_present; int r_mem; } ;
struct cam_path {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct siis_channel* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,struct cam_path*,int *) ;
 scalar_t__ FUNC_5 (struct cam_path**,int *,int ,int,int ) ;
 int FUNC_6 (struct cam_path*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(device_t VAR_5)
{
 struct siis_channel *VAR_6 = FUNC_2(VAR_5);
 struct cam_path *VAR_7;
 u_int32_t VAR_8;
 int VAR_9;

 if (VAR_6->quirks & VAR_3) {
  VAR_8 = FUNC_0(VAR_6->r_mem, VAR_2);
  FUNC_1(VAR_6->r_mem, VAR_2, VAR_8);
 } else {




  VAR_8 = (VAR_6->pm_present) ? 0x8000 : 0x0001;
 }
 if (VAR_4)
  FUNC_3(VAR_5, "SNTF 0x%04x\n", VAR_8);
 for (VAR_9 = 0; VAR_9 < 16; VAR_9++) {
  if ((VAR_8 & (1 << VAR_9)) == 0)
   continue;
  if (FUNC_5(&VAR_7, ((void*)0),
      FUNC_7(VAR_6->path), VAR_9, 0) == VAR_1) {
   FUNC_4(VAR_0, VAR_7, ((void*)0));
   FUNC_6(VAR_7);
  }
 }

}
