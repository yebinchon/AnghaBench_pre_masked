
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
struct ess_info {int simplex_dir; scalar_t__ newspeed; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (struct ess_info*,int) ;
 int FUNC_7 (struct ess_info*,int,int) ;
 int FUNC_8 (struct ess_info*,int,int) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int
FUNC_10(struct ess_info *VAR_4, int VAR_5, int VAR_6, int VAR_7, u_int32_t VAR_8, int VAR_9)
{
 int VAR_10 = (VAR_6 == VAR_2)? 1 : 0;
 int VAR_11 = (VAR_8 & VAR_0)? 1 : 0;
 int VAR_12 = (FUNC_0(VAR_8) > 1)? 1 : 0;
 int VAR_13 = (!(VAR_8 & VAR_1))? 1 : 0;
 u_int8_t VAR_14, VAR_15;

 FUNC_1(FUNC_9("ess_setupch\n"));
 VAR_14 = (VAR_4->newspeed)? FUNC_5(&VAR_7) : FUNC_4(&VAR_7);

 VAR_4->simplex_dir = VAR_10 ? VAR_2 : VAR_3 ;

 if (VAR_5 == 1) {
  FUNC_2((VAR_6 == VAR_2) || (VAR_6 == VAR_3), ("ess_setupch: dir1 bad"));
  VAR_9 = -VAR_9;

  FUNC_8(VAR_4, 0xa4, VAR_9 & 0x00ff);

  FUNC_8(VAR_4, 0xa5, (VAR_9 & 0xff00) >> 8);

  FUNC_8(VAR_4, 0xb8, 0x04 | (VAR_10? 0x00 : 0x0a));

  FUNC_8(VAR_4, 0xa8, (FUNC_6(VAR_4, 0xa8) & ~0x03) | (VAR_12? 0x01 : 0x02));

  FUNC_8(VAR_4, 0xb9, 0x02);

         FUNC_8(VAR_4, 0xa1, VAR_14);

  FUNC_8(VAR_4, 0xa2, FUNC_3(VAR_7));
  FUNC_8(VAR_4, 0xb7, 0x91 | (VAR_13? 0x00 : 0x20) |
        (VAR_11? 0x04 : 0x00) |
        (VAR_12? 0x08 : 0x40));

  FUNC_8(VAR_4, 0xb1, (FUNC_6(VAR_4, 0xb1) & 0x0f) | 0x50);

  FUNC_8(VAR_4, 0xb2, (FUNC_6(VAR_4, 0xb2) & 0x0f) | 0x50);
 } else if (VAR_5 == 2) {
  FUNC_2(VAR_6 == VAR_2, ("ess_setupch: dir2 bad"));
  VAR_9 >>= 1;
  VAR_9 = -VAR_9;

  FUNC_7(VAR_4, 0x74, VAR_9 & 0x00ff);

  FUNC_7(VAR_4, 0x76, (VAR_9 & 0xff00) >> 8);

  FUNC_7(VAR_4, 0x78, 0x10);
  VAR_15 = VAR_11 | (VAR_12 << 1) | ((!VAR_13) << 2);

  FUNC_7(VAR_4, 0x7a, 0x40 | VAR_15);
  if (VAR_4->newspeed) {

   FUNC_7(VAR_4, 0x70, VAR_14);

   FUNC_7(VAR_4, 0x72, FUNC_3(VAR_7));
  }

 }
 return 0;
}
