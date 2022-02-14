
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs {int fs_frag; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct fs *VAR_1, unsigned char *VAR_2, int VAR_3)
{
 unsigned char VAR_4;

 switch (VAR_1->fs_frag) {
 case 8:
  return (VAR_2[VAR_3] == 0xff);
 case 4:
  VAR_4 = 0x0f << ((VAR_3 & 0x1) << 2);
  return ((VAR_2[VAR_3 >> 1] & VAR_4) == VAR_4);
 case 2:
  VAR_4 = 0x03 << ((VAR_3 & 0x3) << 1);
  return ((VAR_2[VAR_3 >> 2] & VAR_4) == VAR_4);
 case 1:
  VAR_4 = 0x01 << (VAR_3 & 0x7);
  return ((VAR_2[VAR_3 >> 3] & VAR_4) == VAR_4);
 default:
  FUNC_0(VAR_0, "isblock bad fs_frag %d\n", VAR_1->fs_frag);
  return (0);
 }
}
