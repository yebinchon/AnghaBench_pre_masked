
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_hwdep {int open_mutex; int list; int device; int card; int oss_type; scalar_t__ ossreg; int open_wait; } ;
struct snd_device {struct snd_hwdep* device_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int) ;
 struct snd_hwdep* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct snd_device *VAR_4)
{
 struct snd_hwdep *VAR_5 = VAR_4->device_data;

 if (FUNC_3(!VAR_5))
  return -VAR_1;
 FUNC_1(&VAR_3);
 if (FUNC_4(VAR_5->card, VAR_5->device) != VAR_5) {
  FUNC_2(&VAR_3);
  return -VAR_0;
 }
 FUNC_1(&VAR_5->open_mutex);
 FUNC_7(&VAR_5->open_wait);




 FUNC_5(VAR_2, VAR_5->card, VAR_5->device);
 FUNC_0(&VAR_5->list);
 FUNC_2(&VAR_5->open_mutex);
 FUNC_2(&VAR_3);
 return 0;
}
