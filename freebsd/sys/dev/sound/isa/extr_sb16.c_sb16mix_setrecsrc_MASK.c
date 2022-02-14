
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_char ;
struct snd_mixer {int dummy; } ;
struct sb_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct sb_info* FUNC_0 (struct snd_mixer*) ;
 int FUNC_1 (struct sb_info*,int,int) ;

__attribute__((used)) static u_int32_t
FUNC_2(struct snd_mixer *VAR_8, u_int32_t VAR_9)
{
     struct sb_info *VAR_10 = FUNC_0(VAR_8);
     u_char VAR_11, VAR_12;

 VAR_11 = 0;
 VAR_12 = 0;
 if (VAR_9 & VAR_6) {
  VAR_11 |= 0x01;
  VAR_12 |= 0x01;
 }

 if (VAR_9 & VAR_3) {
  VAR_11 |= 0x04;
  VAR_12 |= 0x02;
 }

 if (VAR_9 & VAR_4) {
  VAR_11 |= 0x10;
  VAR_12 |= 0x08;
 }

 if (VAR_9 & VAR_7) {
  VAR_11 |= 0x40;
  VAR_12 |= 0x20;
 }

 FUNC_1(VAR_10, VAR_0, VAR_11);
 FUNC_1(VAR_10, VAR_1, VAR_12);


 if (VAR_9 & VAR_5)
  FUNC_1(VAR_10, 0x4a, 0x0c);
 else
  FUNC_1(VAR_10, 0x4a, 0x00);
        FUNC_1(VAR_10, VAR_2, 0x1f & ~1);

 return VAR_9;
}
