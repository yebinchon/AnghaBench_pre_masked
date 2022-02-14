
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_ac97 {int dummy; } ;
struct TYPE_6__ {int mutex; TYPE_2__* psc_regs; } ;
struct TYPE_4__ {int status; } ;
struct TYPE_5__ {int ac97_cmd; TYPE_1__ sr_csr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned short) ;
 int FUNC_4 (char*) ;
 TYPE_3__* VAR_1 ;
 int FUNC_5 (int,int,int ) ;

__attribute__((used)) static void FUNC_6(struct snd_ac97 *VAR_2,
    unsigned short VAR_3, unsigned short VAR_4)
{
 int VAR_5;

 FUNC_1(&VAR_1->mutex);


 VAR_5 = FUNC_5(!(FUNC_0(&VAR_1->psc_regs->sr_csr.status) &
    VAR_0), 100, 0);
 if (VAR_5 == 0) {
  FUNC_4("timeout on ac97 bus (write)\n");
  goto out;
 }

 FUNC_3(&VAR_1->psc_regs->ac97_cmd,
   ((VAR_3 & 0x7f) << 24) | (VAR_4 << 8));

 out:
 FUNC_2(&VAR_1->mutex);
}
