
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mvs_channel {int path; scalar_t__ pm_present; int r_mem; } ;
struct cam_path {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct mvs_channel* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,struct cam_path*,int *) ;
 scalar_t__ FUNC_4 (struct cam_path**,int *,int ,int,int ) ;
 int FUNC_5 (struct cam_path*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(device_t VAR_4)
{
 struct mvs_channel *VAR_5 = FUNC_1(VAR_4);
 struct cam_path *VAR_6;
 uint32_t VAR_7;
 int VAR_8;


 VAR_7 = FUNC_0(VAR_5->r_mem, VAR_2);
 if ((VAR_7 & 0x80ff) == 0x80a1)
  VAR_8 = (VAR_7 & 0x0f00) >> 8;
 else
  VAR_8 = VAR_5->pm_present ? 15 : 0;
 if (VAR_3)
  FUNC_2(VAR_4, "SNTF %d\n", VAR_8);
 if (FUNC_4(&VAR_6, ((void*)0),
     FUNC_6(VAR_5->path), VAR_8, 0) == VAR_1) {
  FUNC_3(VAR_0, VAR_6, ((void*)0));
  FUNC_5(VAR_6);
 }
}
