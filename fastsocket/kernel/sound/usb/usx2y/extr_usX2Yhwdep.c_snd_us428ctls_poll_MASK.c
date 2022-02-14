
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usX2Ydev {int chip_status; int us428ctls_wait_queue_head; struct us428ctls_sharedmem* us428ctls_sharedmem; } ;
struct us428ctls_sharedmem {scalar_t__ CtlSnapShotLast; scalar_t__ CtlSnapShotRed; } ;
struct snd_hwdep {struct usX2Ydev* private_data; } ;
struct file {int dummy; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_1(struct snd_hwdep *VAR_3, struct file *VAR_4, poll_table *VAR_5)
{
 unsigned int VAR_6 = 0;
 struct usX2Ydev *VAR_7 = VAR_3->private_data;
 struct us428ctls_sharedmem *VAR_8 = VAR_7->us428ctls_sharedmem;
 if (VAR_7->chip_status & VAR_2)
  return VAR_0;

 FUNC_0(VAR_4, &VAR_7->us428ctls_wait_queue_head, VAR_5);

 if (VAR_8 != ((void*)0) && VAR_8->CtlSnapShotLast != VAR_8->CtlSnapShotRed)
  VAR_6 |= VAR_1;

 return VAR_6;
}
