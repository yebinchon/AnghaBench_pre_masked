
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ledsc {struct cdev* dev; void* private; int (* func ) (void*,int) ;int unit; int name; } ;
struct cdev {struct ledsc* si_drv1; } ;
typedef int (* led_t ) (void*,int) ;


 int VAR_0 ;
 int FUNC_0 (int *,struct ledsc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct cdev* FUNC_2 (int *,int ,int ,int ,int,char*,char const*) ;
 struct ledsc* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*,int ) ;
 int FUNC_7 (void*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

struct cdev *
FUNC_10(led_t *VAR_11, void *VAR_12, char const *VAR_13, int VAR_14)
{
 struct ledsc *VAR_15;

 VAR_15 = FUNC_3(sizeof *VAR_15, VAR_1, VAR_2 | VAR_3);

 FUNC_8(&VAR_8);
 VAR_15->name = FUNC_6(VAR_13, VAR_1);
 VAR_15->unit = FUNC_1(VAR_9);
 VAR_15->private = VAR_12;
 VAR_15->func = *VAR_11;
 VAR_15->dev = FUNC_2(&VAR_5, VAR_15->unit,
     VAR_4, VAR_0, 0600, "led/%s", VAR_13);
 FUNC_9(&VAR_8);

 FUNC_4(&VAR_7);
 VAR_15->dev->si_drv1 = VAR_15;
 FUNC_0(&VAR_6, VAR_15, VAR_10);
 if (VAR_14 != -1)
  VAR_15->func(VAR_15->private, VAR_14 != 0);
 FUNC_5(&VAR_7);

 return (VAR_15->dev);
}
