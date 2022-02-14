
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct audio_operations {int poll_sleeper; } ;
typedef int poll_table ;


 struct audio_operations** VAR_0 ;
 unsigned int FUNC_0 (struct file*,int,int *) ;
 unsigned int FUNC_1 (struct file*,int,int *) ;
 int FUNC_2 (struct file*,int *,int *) ;

unsigned int FUNC_3(struct file * VAR_1, int VAR_2, poll_table *VAR_3)
{
 struct audio_operations *VAR_4 = VAR_0[VAR_2];
 FUNC_2(VAR_1, &VAR_4->poll_sleeper, VAR_3);
 return FUNC_0(VAR_1, VAR_2, VAR_3) | FUNC_1(VAR_1, VAR_2, VAR_3);
}
