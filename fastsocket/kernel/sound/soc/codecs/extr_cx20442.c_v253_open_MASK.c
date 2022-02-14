
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct snd_soc_codec* disc_data; TYPE_1__* ops; } ;
struct snd_soc_codec {int dummy; } ;
struct TYPE_2__ {int (* write ) (struct tty_struct*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_soc_codec* VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct tty_struct*,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_4)
{
 struct snd_soc_codec *VAR_5 = VAR_2;
 int VAR_6, VAR_7 = FUNC_0(VAR_3);


 if (!VAR_4->ops->write)
  return -VAR_0;


 VAR_4->disc_data = VAR_5;

 if (VAR_4->ops->write(VAR_4, VAR_3, VAR_7) != VAR_7) {
  VAR_6 = -VAR_1;
  goto err;
 }

 return 0;
err:
 VAR_4->disc_data = ((void*)0);
 return VAR_6;
}
