
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_minor {int type; int card; int device; int dev; void* private_data; struct file_operations const* f_ops; } ;
struct snd_card {int number; } ;
struct file_operations {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct device*,int ,void*,char*,char const*) ;
 int FUNC_4 (struct snd_minor*) ;
 struct snd_minor* FUNC_5 (int,int ) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 () ;
 int FUNC_10 (int,struct snd_card*,int) ;
 struct snd_minor** VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_11(int VAR_8, struct snd_card *VAR_9, int VAR_10,
    const struct file_operations *VAR_11,
    void *VAR_12,
    const char *VAR_13, struct device *VAR_14)
{
 int VAR_15;
 struct snd_minor *VAR_16;

 if (FUNC_8(!VAR_13))
  return -VAR_1;
 VAR_16 = FUNC_5(sizeof *VAR_16, VAR_3);
 if (VAR_16 == ((void*)0))
  return -VAR_2;
 VAR_16->type = VAR_8;
 VAR_16->card = VAR_9 ? VAR_9->number : -1;
 VAR_16->device = VAR_10;
 VAR_16->f_ops = VAR_11;
 VAR_16->private_data = VAR_12;
 FUNC_6(&VAR_7);



 VAR_15 = FUNC_10(VAR_8, VAR_9, VAR_10);
 if (VAR_15 >= 0 && VAR_5[VAR_15])
  VAR_15 = -VAR_0;

 if (VAR_15 < 0) {
  FUNC_7(&VAR_7);
  FUNC_4(VAR_16);
  return VAR_15;
 }
 VAR_5[VAR_15] = VAR_16;
 VAR_16->dev = FUNC_3(VAR_6, VAR_14, FUNC_1(VAR_4, VAR_15),
      VAR_12, "%s", VAR_13);
 if (FUNC_0(VAR_16->dev)) {
  VAR_5[VAR_15] = ((void*)0);
  FUNC_7(&VAR_7);
  VAR_15 = FUNC_2(VAR_16->dev);
  FUNC_4(VAR_16);
  return VAR_15;
 }

 FUNC_7(&VAR_7);
 return 0;
}
