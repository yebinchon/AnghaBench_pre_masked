
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_file {struct snd_rawmidi* rmidi; } ;
struct snd_rawmidi {TYPE_1__* card; } ;
struct module {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct snd_rawmidi_file* private_data; } ;
struct TYPE_2__ {struct module* module; } ;


 int FUNC_0 (struct snd_rawmidi_file*) ;
 int FUNC_1 (struct module*) ;
 int FUNC_2 (struct snd_rawmidi_file*) ;
 int FUNC_3 (TYPE_1__*,struct file*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0, struct file *VAR_1)
{
 struct snd_rawmidi_file *VAR_2;
 struct snd_rawmidi *VAR_3;
 struct module *VAR_4;

 VAR_2 = VAR_1->private_data;
 VAR_3 = VAR_2->rmidi;
 FUNC_2(VAR_2);
 FUNC_0(VAR_2);
 VAR_4 = VAR_3->card->module;
 FUNC_3(VAR_3->card, VAR_1);
 FUNC_1(VAR_4);
 return 0;
}
