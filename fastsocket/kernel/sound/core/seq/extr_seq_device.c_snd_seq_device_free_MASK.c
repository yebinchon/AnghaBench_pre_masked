
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_device {int (* private_free ) (struct snd_seq_device*) ;int list; int id; } ;
struct ops_list {int reg_mutex; int num_devices; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ops_list* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct snd_seq_device*,struct ops_list*) ;
 int FUNC_2 (struct snd_seq_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct snd_seq_device*) ;
 int FUNC_8 (struct ops_list*) ;

__attribute__((used)) static int FUNC_9(struct snd_seq_device *VAR_2)
{
 struct ops_list *VAR_3;

 if (FUNC_6(!VAR_2))
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_2->id, 0);
 if (VAR_3 == ((void*)0))
  return -VAR_1;


 FUNC_4(&VAR_3->reg_mutex);
 FUNC_3(&VAR_2->list);
 VAR_3->num_devices--;
 FUNC_5(&VAR_3->reg_mutex);

 FUNC_1(VAR_2, VAR_3);
 if (VAR_2->private_free)
  VAR_2->private_free(VAR_2);
 FUNC_2(VAR_2);

 FUNC_8(VAR_3);

 return 0;
}
