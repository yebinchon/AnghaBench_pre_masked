
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer {int device_list; } ;
struct snd_device {struct snd_timer* device_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct snd_device *VAR_1)
{
 struct snd_timer *VAR_2 = VAR_1->device_data;
 FUNC_1(&VAR_0);
 FUNC_0(&VAR_2->device_list);
 FUNC_2(&VAR_0);
 return 0;
}
