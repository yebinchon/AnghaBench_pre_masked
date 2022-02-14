
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vblk_disk {int disk_id; int alt_name; } ;
struct TYPE_2__ {struct vblk_disk disk; } ;
struct vblk {TYPE_1__ vblk; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*,int ,int) ;
 int FUNC_3 (int const*,int ) ;
 int FUNC_4 (int const*,int,int,int) ;

__attribute__((used)) static bool FUNC_5 (const u8 *VAR_1, int VAR_2, struct vblk *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 struct vblk_disk *VAR_9;

 FUNC_0 (!VAR_1 || !VAR_3);

 VAR_4 = FUNC_4 (VAR_1, VAR_2, 0x18, 0);
 VAR_5 = FUNC_4 (VAR_1, VAR_2, 0x18, VAR_4);
 VAR_6 = FUNC_4 (VAR_1, VAR_2, 0x18, VAR_5);
 VAR_7 = FUNC_4 (VAR_1, VAR_2, 0x18, VAR_6);
 VAR_8 = VAR_7;
 if (VAR_8 < 0)
  return 0;

 VAR_8 += VAR_0;
 if (VAR_8 != FUNC_1(VAR_1 + 0x14))
  return 0;

 VAR_9 = &VAR_3->vblk.disk;
 FUNC_2 (VAR_1 + 0x18 + VAR_6, VAR_9->alt_name,
  sizeof (VAR_9->alt_name));
 if (!FUNC_3 (VAR_1 + 0x19 + VAR_5, VAR_9->disk_id))
  return 0;

 return 1;
}
