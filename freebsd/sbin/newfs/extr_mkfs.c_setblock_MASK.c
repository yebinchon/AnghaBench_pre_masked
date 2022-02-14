
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs {int fs_frag; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct fs *VAR_1, unsigned char *VAR_2, int VAR_3)
{
 switch (VAR_1->fs_frag) {
 case 8:
  VAR_2[VAR_3] = 0xff;
  return;
 case 4:
  VAR_2[VAR_3 >> 1] |= (0x0f << ((VAR_3 & 0x1) << 2));
  return;
 case 2:
  VAR_2[VAR_3 >> 2] |= (0x03 << ((VAR_3 & 0x3) << 1));
  return;
 case 1:
  VAR_2[VAR_3 >> 3] |= (0x01 << (VAR_3 & 0x7));
  return;
 default:
  FUNC_0(VAR_0, "setblock bad fs_frag %d\n", VAR_1->fs_frag);
  return;
 }
}
