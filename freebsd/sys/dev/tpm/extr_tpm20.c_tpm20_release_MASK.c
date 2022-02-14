
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_sc {int * sc_cdev; int buf_cv; int dev_lock; int * buf; int harvest_callout; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct tpm_sc *VAR_1)
{





 if (VAR_1->buf != ((void*)0))
  FUNC_3(VAR_1->buf, VAR_0);

 FUNC_4(&VAR_1->dev_lock);
 FUNC_1(&VAR_1->buf_cv);
 if (VAR_1->sc_cdev != ((void*)0))
  FUNC_2(VAR_1->sc_cdev);
}
