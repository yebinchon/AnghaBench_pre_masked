
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vblk_dgrp {int dummy; } ;
struct TYPE_2__ {struct vblk_dgrp dgrp; } ;
struct vblk {TYPE_1__ vblk; } ;
typedef int buf ;


 int FUNC_0 (int) ;
 int const VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*,char*,int) ;
 int FUNC_3 (int const*,int,int,int) ;

__attribute__((used)) static bool FUNC_4 (const u8 *VAR_2, int VAR_3, struct vblk *VAR_4)
{
 char VAR_5[64];
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 struct vblk_dgrp *VAR_11;

 FUNC_0 (!VAR_2 || !VAR_4);

 VAR_6 = FUNC_3 (VAR_2, VAR_3, 0x18, 0);
 VAR_7 = FUNC_3 (VAR_2, VAR_3, 0x18, VAR_6);

 if (VAR_2[0x12] & VAR_0) {
  VAR_8 = FUNC_3 (VAR_2, VAR_3, 0x44, VAR_7);
  VAR_9 = FUNC_3 (VAR_2, VAR_3, 0x44, VAR_8);
  VAR_10 = VAR_9;
 } else {
  VAR_8 = 0;
  VAR_9 = 0;
  VAR_10 = VAR_7;
 }
 if (VAR_10 < 0)
  return 0;

 VAR_10 += VAR_1;
 if (VAR_10 != FUNC_1(VAR_2 + 0x14))
  return 0;

 VAR_11 = &VAR_4->vblk.dgrp;

 FUNC_2 (VAR_2 + 0x18 + VAR_6, VAR_5, sizeof (VAR_5));
 return 1;
}
