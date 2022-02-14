
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_device {int id; } ;
struct snd_device {struct snd_seq_device* device_data; } ;
struct ops_list {int dummy; } ;


 int VAR_0 ;
 struct ops_list* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct snd_seq_device*,struct ops_list*) ;
 int FUNC_2 (struct ops_list*) ;

__attribute__((used)) static int FUNC_3(struct snd_device *VAR_1)
{
 struct snd_seq_device *VAR_2 = VAR_1->device_data;
 struct ops_list *VAR_3;

 VAR_3 = FUNC_0(VAR_2->id, 0);
 if (VAR_3 == ((void*)0))
  return -VAR_0;

 FUNC_1(VAR_2, VAR_3);

 FUNC_2(VAR_3);
 return 0;
}
