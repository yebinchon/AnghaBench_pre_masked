
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ima_template_entry {int digest; } ;
struct ima_queue_entry {int hnext; int later; struct ima_template_entry* entry; } ;
struct TYPE_2__ {int * queue; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 unsigned int FUNC_3 (int ) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 struct ima_queue_entry* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct ima_template_entry *VAR_4)
{
 struct ima_queue_entry *VAR_5;
 unsigned int VAR_6;

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
 if (VAR_5 == ((void*)0)) {
  FUNC_6("IMA: OUT OF MEMORY ERROR creating queue entry.\n");
  return -VAR_0;
 }
 VAR_5->entry = VAR_4;

 FUNC_0(&VAR_5->later);
 FUNC_5(&VAR_5->later, &VAR_3);

 FUNC_1(&VAR_2.len);
 VAR_6 = FUNC_3(VAR_4->digest);
 FUNC_2(&VAR_5->hnext, &VAR_2.queue[VAR_6]);
 return 0;
}
