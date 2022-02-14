
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_sc {int dev; int dev_lock; int buf_cv; scalar_t__ pending_data_length; int buf; int discard_buffer_callout; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(void *VAR_1)
{
 struct tpm_sc *VAR_2;

 VAR_2 = (struct tpm_sc *)VAR_1;
 if (FUNC_0(&VAR_2->discard_buffer_callout))
  return;

 FUNC_4(&VAR_2->dev_lock);

 FUNC_3(VAR_2->buf, 0, VAR_0);
 VAR_2->pending_data_length = 0;

 FUNC_1(&VAR_2->buf_cv);
 FUNC_5(&VAR_2->dev_lock);

 FUNC_2(VAR_2->dev,
     "User failed to read buffer in time\n");
}
