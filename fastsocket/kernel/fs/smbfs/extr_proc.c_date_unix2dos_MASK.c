
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_sb_info {int dummy; } ;
typedef int __u16 ;


 int* VAR_0 ;
 int FUNC_0 (struct smb_sb_info*,int) ;

__attribute__((used)) static void
FUNC_1(struct smb_sb_info *VAR_1,
       int VAR_2, __u16 *VAR_3, __u16 *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_2 = FUNC_0(VAR_1, VAR_2);
 if (VAR_2 < 315532800)
  VAR_2 = 315532800;

 *VAR_4 = (VAR_2 % 60) / 2 +
  (((VAR_2 / 60) % 60) << 5) +
  (((VAR_2 / 3600) % 24) << 11);

 VAR_5 = VAR_2 / 86400 - 3652;
 VAR_6 = VAR_5 / 365;
 if ((VAR_6 + 3) / 4 + 365 * VAR_6 > VAR_5)
  VAR_6--;
 VAR_5 -= (VAR_6 + 3) / 4 + 365 * VAR_6;
 if (VAR_5 == 59 && !(VAR_6 & 3)) {
  VAR_7 = VAR_5;
  VAR_8 = 2;
 } else {
  VAR_7 = (VAR_6 & 3) || VAR_5 <= 59 ? VAR_5 : VAR_5 - 1;
  for (VAR_8 = 1; VAR_8 < 12; VAR_8++)
   if (VAR_0[VAR_8] > VAR_7)
    break;
 }
 *VAR_3 = VAR_7 - VAR_0[VAR_8 - 1] + 1 + (VAR_8 << 5) + (VAR_6 << 9);
}
