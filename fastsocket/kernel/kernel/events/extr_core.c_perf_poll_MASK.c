
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer {int poll; } ;
struct perf_event {int waitq; int mmap_mutex; int rb; } ;
struct file {struct perf_event* private_data; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct file*,int *,int *) ;
 struct ring_buffer* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct perf_event*,struct ring_buffer*) ;

__attribute__((used)) static unsigned int FUNC_8(struct file *VAR_1, poll_table *VAR_2)
{
 struct perf_event *VAR_3 = VAR_1->private_data;
 struct ring_buffer *VAR_4;
 unsigned int VAR_5 = VAR_0;
 FUNC_1(&VAR_3->mmap_mutex);

 FUNC_5();
 VAR_4 = FUNC_4(VAR_3->rb);
 if (VAR_4) {
  FUNC_7(VAR_3, VAR_4);
  VAR_5 = FUNC_0(&VAR_4->poll, 0);
 }
 FUNC_6();

 FUNC_2(&VAR_3->mmap_mutex);

 FUNC_3(VAR_1, &VAR_3->waitq, VAR_2);

 return VAR_5;
}
