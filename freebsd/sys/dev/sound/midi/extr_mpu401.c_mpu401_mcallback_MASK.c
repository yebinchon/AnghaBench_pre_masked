
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_midi {int dummy; } ;
struct mpu401 {int flags; int timer; scalar_t__ si; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int ,struct mpu401*) ;
 int VAR_4 ;
 int FUNC_1 (char*,char*,char*,char*,char*) ;

__attribute__((used)) static void
FUNC_2(struct snd_midi *VAR_5, void *VAR_6, int VAR_7)
{
 struct mpu401 *VAR_8 = VAR_6;







 if (VAR_7 & VAR_3 && VAR_8->si) {
  FUNC_0(&VAR_8->timer, 1, VAR_4, VAR_8);
 }
 VAR_8->flags = VAR_7;
}
