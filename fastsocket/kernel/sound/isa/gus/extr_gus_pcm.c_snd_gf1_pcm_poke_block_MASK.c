
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_gus_card {int reg_lock; scalar_t__ interwave; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_gus_card*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,unsigned char*,unsigned int) ;
 int FUNC_4 (int ,unsigned char*,unsigned int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct snd_gus_card*,unsigned int) ;
 int FUNC_8 (struct snd_gus_card*,int ,int) ;
 int FUNC_9 (struct snd_gus_card*,int ,int) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_12(struct snd_gus_card *VAR_7, unsigned char *VAR_8,
      unsigned int VAR_9, unsigned int VAR_10,
      int VAR_11, int VAR_12)
{
 unsigned int VAR_13;
 unsigned long VAR_14;






 while (VAR_10 > 0) {
  VAR_13 = VAR_10;
  if (VAR_13 > 512)
   VAR_13 = 512;
  VAR_10 -= VAR_13;
  if (VAR_7->interwave) {
   FUNC_10(&VAR_7->reg_lock, VAR_14);
   FUNC_9(VAR_7, VAR_4, 0x01 | (VAR_12 ? 0x08 : 0x00));
   FUNC_7(VAR_7, VAR_9);
   if (VAR_11) {
    FUNC_2(VAR_5, FUNC_0(VAR_7, VAR_3));
    FUNC_4(FUNC_0(VAR_7, VAR_2), VAR_8, VAR_13 >> 1);
   } else {
    FUNC_3(FUNC_0(VAR_7, VAR_0), VAR_8, VAR_13);
   }
   FUNC_11(&VAR_7->reg_lock, VAR_14);
   VAR_8 += 512;
   VAR_9 += 512;
  } else {
   VAR_12 = VAR_12 ? 0x80 : 0x00;
   if (VAR_11) {
    VAR_13 >>= 1;
    while (VAR_13--) {
     FUNC_8(VAR_7, VAR_9++, *VAR_8++);
     FUNC_8(VAR_7, VAR_9++, *VAR_8++ ^ VAR_12);
    }
   } else {
    while (VAR_13--)
     FUNC_8(VAR_7, VAR_9++, *VAR_8++ ^ VAR_12);
   }
  }
  if (VAR_10 > 0 && !FUNC_1()) {
   FUNC_5(1);
   if (FUNC_6(VAR_6))
    return -VAR_1;
  }
 }
 return 0;
}
