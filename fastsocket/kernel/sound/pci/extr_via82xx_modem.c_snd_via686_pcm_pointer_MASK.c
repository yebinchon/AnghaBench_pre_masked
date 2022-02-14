
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ addr; } ;
struct viadev {unsigned int tbl_entries; TYPE_1__ table; } ;
struct via82xx_modem {int reg_lock; } ;
struct snd_pcm_substream {TYPE_2__* runtime; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_4__ {struct viadev* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct viadev*,int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,unsigned int) ;
 unsigned int FUNC_2 (struct viadev*,unsigned int,unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 struct via82xx_modem* FUNC_6 (struct snd_pcm_substream*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_9(struct snd_pcm_substream *VAR_4)
{
 struct via82xx_modem *VAR_5 = FUNC_6(VAR_4);
 struct viadev *VAR_6 = VAR_4->runtime->private_data;
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10;

 if (FUNC_5(!VAR_6->tbl_entries))
  return 0;
 if (!(FUNC_3(FUNC_0(VAR_6, VAR_2)) & VAR_3))
  return 0;

 FUNC_7(&VAR_5->reg_lock);
 VAR_9 = FUNC_4(FUNC_0(VAR_6, VAR_0)) & 0xffffff;



 VAR_8 = FUNC_4(FUNC_0(VAR_6, VAR_1));
 if (VAR_8 <= (unsigned int)VAR_6->table.addr)
  VAR_7 = 0;
 else
  VAR_7 = ((VAR_8 - (unsigned int)VAR_6->table.addr) / 8 - 1) %
   VAR_6->tbl_entries;
 VAR_10 = FUNC_2(VAR_6, VAR_7, VAR_9);
 FUNC_8(&VAR_5->reg_lock);

 return FUNC_1(VAR_4->runtime, VAR_10);
}
