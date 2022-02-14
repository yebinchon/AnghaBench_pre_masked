
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ledsc {struct ledsc* name; int * spec; int unit; int * ptr; } ;
struct cdev {struct ledsc* si_drv1; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct ledsc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cdev*) ;
 int FUNC_4 (struct ledsc*,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void
FUNC_11(struct cdev *VAR_8)
{
 struct ledsc *VAR_9;

 FUNC_6(&VAR_4);
 VAR_9 = VAR_8->si_drv1;
 VAR_8->si_drv1 = ((void*)0);
 if (VAR_9->ptr != ((void*)0))
  VAR_1--;
 FUNC_1(VAR_9, VAR_7);
 if (FUNC_0(&VAR_3))
  FUNC_2(&VAR_2);
 FUNC_7(&VAR_4);

 FUNC_9(&VAR_5);
 FUNC_5(VAR_6, VAR_9->unit);
 FUNC_3(VAR_8);
 if (VAR_9->spec != ((void*)0))
  FUNC_8(VAR_9->spec);
 FUNC_4(VAR_9->name, VAR_0);
 FUNC_4(VAR_9, VAR_0);
 FUNC_10(&VAR_5);
}
