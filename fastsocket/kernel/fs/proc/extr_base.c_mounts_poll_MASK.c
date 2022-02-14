
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_mounts {scalar_t__ event; struct mnt_namespace* ns; } ;
struct mnt_namespace {scalar_t__ event; int poll; } ;
struct file {struct proc_mounts* private_data; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;

__attribute__((used)) static unsigned FUNC_3(struct file *VAR_5, poll_table *VAR_6)
{
 struct proc_mounts *VAR_7 = VAR_5->private_data;
 struct mnt_namespace *VAR_8 = VAR_7->ns;
 unsigned VAR_9 = VAR_1 | VAR_3;

 FUNC_0(VAR_5, &VAR_8->poll, VAR_6);

 FUNC_1(&VAR_4);
 if (VAR_7->event != VAR_8->event) {
  VAR_7->event = VAR_8->event;
  VAR_9 |= VAR_0 | VAR_2;
 }
 FUNC_2(&VAR_4);

 return VAR_9;
}
