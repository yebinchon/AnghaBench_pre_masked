
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdc_data {int flags; int fdc_mtx; int dmachan; int fdc_thread; int head; int * fdc_intr; int res_irq; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;
 struct fdc_data* FUNC_2 (int ) ;
 int FUNC_3 (struct fdc_data*) ;
 int FUNC_4 (struct fdc_data*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,int ,char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int
FUNC_11(device_t VAR_4)
{
 struct fdc_data *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_4);


 if ((VAR_6 = FUNC_0(VAR_4)))
  return (VAR_6);

 if (VAR_5->fdc_intr)
  FUNC_1(VAR_4, VAR_5->res_irq, VAR_5->fdc_intr);
 VAR_5->fdc_intr = ((void*)0);


 FUNC_8(&VAR_5->fdc_mtx);
 VAR_5->flags |= VAR_1;
 FUNC_10(&VAR_5->head);
 while ((VAR_5->flags & VAR_0) != 0)
  FUNC_6(VAR_5->fdc_thread, &VAR_5->fdc_mtx, VAR_3, "fdcdet", 0);
 FUNC_9(&VAR_5->fdc_mtx);


 FUNC_4(VAR_5, 0);

 if (!(VAR_5->flags & VAR_2))
  FUNC_5(VAR_5->dmachan);
 FUNC_3(VAR_5);
 FUNC_7(&VAR_5->fdc_mtx);
 return (0);
}
