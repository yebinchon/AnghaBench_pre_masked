
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sb_info {int bd_id; int bd_flags; } ;
struct sb_chinfo {scalar_t__ dir; int spd; int fmt; struct sb_info* parent; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct sb_info*,int,int) ;
 int FUNC_2 (struct sb_info*) ;
 int FUNC_3 (struct sb_info*) ;

__attribute__((used)) static int
FUNC_4(struct sb_chinfo *VAR_2)
{
 struct sb_info *VAR_3 = VAR_2->parent;
     int VAR_4 = (VAR_2->dir == VAR_1)? 1 : 0;
 int VAR_5 = (FUNC_0(VAR_2->fmt) > 1)? 1 : 0;
 int VAR_6, VAR_7, VAR_8, VAR_9;
 u_char VAR_10;

 if (VAR_3->bd_id >= 0x300) {
  VAR_8 = VAR_5? 11025 : 23000;
  VAR_9 = VAR_5? 22050 : 44100;
 } else if (VAR_3->bd_id > 0x200) {
  VAR_8 = VAR_4? 23000 : 13000;
  VAR_9 = VAR_4? 44100 : 15000;
 } else {
  VAR_8 = 999999;
  VAR_9 = VAR_4? 23000 : 13000;
 }

 VAR_6 = VAR_2->spd;
 if (VAR_6 > VAR_9)
  VAR_6 = VAR_9;

 FUNC_2(VAR_3);
 VAR_3->bd_flags &= ~VAR_0;
 if (VAR_6 > VAR_8)
  VAR_3->bd_flags |= VAR_0;

 VAR_7 = 65536 - (256000000 / (VAR_6 << VAR_5));
 VAR_10 = VAR_7 >> 8;

 FUNC_1(VAR_3, 0x40, VAR_10);

 VAR_6 = (256000000 / (65536 - VAR_7)) >> VAR_5;

 VAR_2->spd = VAR_6;
 FUNC_3(VAR_3);
 return VAR_6;
}
