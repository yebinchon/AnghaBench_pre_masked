
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vblk_disk {int disk_id; } ;
struct TYPE_2__ {struct vblk_disk disk; } ;
struct vblk {TYPE_1__ vblk; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*,int,int,int) ;
 int FUNC_3 (int ,int const*,int ) ;

__attribute__((used)) static bool FUNC_4 (const u8 *VAR_2, int VAR_3, struct vblk *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 struct vblk_disk *VAR_8;

 FUNC_0 (!VAR_2 || !VAR_4);

 VAR_5 = FUNC_2 (VAR_2, VAR_3, 0x18, 0);
 VAR_6 = FUNC_2 (VAR_2, VAR_3, 0x18, VAR_5);
 VAR_7 = VAR_6;
 if (VAR_7 < 0)
  return 0;

 VAR_7 += VAR_1;
 if (VAR_7 != FUNC_1(VAR_2 + 0x14))
  return 0;

 VAR_8 = &VAR_4->vblk.disk;
 FUNC_3 (VAR_8->disk_id, VAR_2 + 0x18 + VAR_6, VAR_0);
 return 1;
}
