
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_sc {int harvest_ticks; int sc_cdev; scalar_t__ pending_data_length; int harvest_callout; int discard_buffer_callout; int buf_cv; int dev_lock; int buf; } ;
struct make_dev_args {struct tpm_sc* mda_si_drv1; int mda_mode; int mda_gid; int mda_uid; int * mda_devsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int ,struct tpm_sc*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct make_dev_args*) ;
 int FUNC_4 (struct make_dev_args*,int *,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (struct tpm_sc*) ;

int
FUNC_8(struct tpm_sc *VAR_11)
{
 struct make_dev_args VAR_12;
 int VAR_13;

 VAR_11->buf = FUNC_5(VAR_3, VAR_1, VAR_2);
 FUNC_6(&VAR_11->dev_lock, "TPM driver lock");
 FUNC_2(&VAR_11->buf_cv, "TPM buffer cv");
 FUNC_0(&VAR_11->discard_buffer_callout, 1);





 VAR_11->pending_data_length = 0;

 FUNC_3(&VAR_12);
 VAR_12.mda_devsw = &VAR_9;
 VAR_12.mda_uid = VAR_7;
 VAR_12.mda_gid = VAR_0;
 VAR_12.mda_mode = VAR_5;
 VAR_12.mda_si_drv1 = VAR_11;
 VAR_13 = FUNC_4(&VAR_12, &VAR_11->sc_cdev, VAR_4);
 if (VAR_13 != 0)
  FUNC_7(VAR_11);

 return (VAR_13);

}
