
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat_session {int stat_root; TYPE_1__* ts; int stat_mutex; } ;
struct seq_file {struct stat_session* private; } ;
typedef void rb_node ;
typedef int loff_t ;
struct TYPE_2__ {scalar_t__ stat_headers; } ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int *) ;
 void* FUNC_2 (void*) ;

__attribute__((used)) static void *FUNC_3(struct seq_file *VAR_1, loff_t *VAR_2)
{
 struct stat_session *VAR_3 = VAR_1->private;
 struct rb_node *VAR_4;
 int VAR_5 = *VAR_2;
 int VAR_6;


 FUNC_0(&VAR_3->stat_mutex);


 if (VAR_3->ts->stat_headers) {
  if (VAR_5 == 0)
   return VAR_0;
  VAR_5--;
 }

 VAR_4 = FUNC_1(&VAR_3->stat_root);
 for (VAR_6 = 0; VAR_4 && VAR_6 < VAR_5; VAR_6++)
  VAR_4 = FUNC_2(VAR_4);

 return VAR_4;
}
