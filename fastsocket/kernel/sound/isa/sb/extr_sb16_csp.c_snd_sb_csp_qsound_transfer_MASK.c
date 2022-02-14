
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb_csp {int running; int qpos_left; int qpos_right; int q_lock; scalar_t__ qpos_changed; int chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_sb_csp * VAR_2)
{
 int VAR_3 = -VAR_0;

 FUNC_1(&VAR_2->q_lock);
 if (VAR_2->running & VAR_1) {
  FUNC_0(VAR_2->chip, 0xe0, 0x01);

  FUNC_0(VAR_2->chip, 0x00, VAR_2->qpos_left);
  FUNC_0(VAR_2->chip, 0x02, 0x00);

  FUNC_0(VAR_2->chip, 0x00, VAR_2->qpos_right);
  FUNC_0(VAR_2->chip, 0x03, 0x00);
  VAR_3 = 0;
 }
 VAR_2->qpos_changed = 0;
 FUNC_2(&VAR_2->q_lock);
 return VAR_3;
}
