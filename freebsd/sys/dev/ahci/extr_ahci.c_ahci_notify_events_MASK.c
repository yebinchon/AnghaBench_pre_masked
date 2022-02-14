
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct cam_path {int dummy; } ;
struct ahci_channel {int caps; int path; int dev; int r_mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,struct cam_path*,int *) ;
 scalar_t__ FUNC_3 (struct cam_path**,int *,int ,int,int ) ;
 int FUNC_4 (struct cam_path*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct ahci_channel *VAR_5, u_int32_t VAR_6)
{
 struct cam_path *VAR_7;
 int VAR_8;

 if (VAR_5->caps & VAR_1)
  FUNC_0(VAR_5->r_mem, VAR_2, VAR_6);
 if (VAR_4)
  FUNC_1(VAR_5->dev, "SNTF 0x%04x\n", VAR_6);
 for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {
  if ((VAR_6 & (1 << VAR_8)) == 0)
   continue;
  if (FUNC_3(&VAR_7, ((void*)0),
      FUNC_5(VAR_5->path), VAR_8, 0) == VAR_3) {
   FUNC_2(VAR_0, VAR_7, ((void*)0));
   FUNC_4(VAR_7);
  }
 }
}
