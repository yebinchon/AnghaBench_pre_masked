
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct smb_sb_info {int dummy; } ;
typedef int __u16 ;


 int* VAR_0 ;
 int FUNC_0 (struct smb_sb_info*,int) ;

__attribute__((used)) static time_t
FUNC_1(struct smb_sb_info *VAR_1, __u16 VAR_2, __u16 VAR_3)
{
 int VAR_4, VAR_5;
 time_t VAR_6;



 VAR_4 = ((VAR_2 >> 5) - 1) & 15;
 VAR_5 = VAR_2 >> 9;
 VAR_6 = (VAR_3 & 31) * 2 + 60 * ((VAR_3 >> 5) & 63) + (VAR_3 >> 11) * 3600 + 86400 *
     ((VAR_2 & 31) - 1 + VAR_0[VAR_4] + (VAR_5 / 4) + VAR_5 * 365 - ((VAR_5 & 3) == 0 &&
         VAR_4 < 2 ? 1 : 0) + 3653);

 return FUNC_0(VAR_1, VAR_6);
}
