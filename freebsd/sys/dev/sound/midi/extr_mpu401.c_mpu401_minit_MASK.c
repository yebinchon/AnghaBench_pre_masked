
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_midi {int dummy; } ;
struct mpu401 {int dummy; } ;


 int FUNC_0 (struct mpu401*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct mpu401*) ;
 scalar_t__ FUNC_2 (struct mpu401*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(struct snd_midi *VAR_3, void *VAR_4)
{
 struct mpu401 *VAR_5 = VAR_4;
 int VAR_6;

 FUNC_0(VAR_5, VAR_1);
 FUNC_0(VAR_5, VAR_2);
 return 0;
 VAR_6 = 0;
 while (++VAR_6 < 2000) {
  if (FUNC_2(VAR_5))
   if (FUNC_1(VAR_5) == VAR_0)
    break;
 }

 if (VAR_6 < 2000) {
  FUNC_0(VAR_5, VAR_2);
  return 0;
 }
 FUNC_3("mpu401_minit failed active sensing\n");
 return 1;
}
