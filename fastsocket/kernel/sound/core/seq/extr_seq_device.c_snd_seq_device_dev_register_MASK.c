
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_device {int id; } ;
struct snd_device {struct snd_seq_device* device_data; } ;
struct ops_list {int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ops_list* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct snd_seq_device*,struct ops_list*) ;
 int FUNC_2 (struct ops_list*) ;

__attribute__((used)) static int FUNC_3(struct snd_device *VAR_2)
{
 struct snd_seq_device *VAR_3 = VAR_2->device_data;
 struct ops_list *VAR_4;

 VAR_4 = FUNC_0(VAR_3->id, 0);
 if (VAR_4 == ((void*)0))
  return -VAR_1;




 if (VAR_4->driver & VAR_0)
  FUNC_1(VAR_3, VAR_4);

 FUNC_2(VAR_4);
 return 0;
}
