
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int read_proc; void* data; } ;
struct irq_desc {scalar_t__ dir; int * chip; } ;


 int VAR_0 ;
 struct proc_dir_entry* FUNC_0 (char*,int,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_6 ;
 int FUNC_2 (char*,int,scalar_t__,int *,void*) ;
 scalar_t__ FUNC_3 (char*,int ) ;
 int VAR_7 ;
 int FUNC_4 (char*,char*,unsigned int) ;

void FUNC_5(unsigned int VAR_8, struct irq_desc *VAR_9)
{
 char VAR_10 [VAR_0];
 struct proc_dir_entry *VAR_11;

 if (!VAR_7 || (VAR_9->chip == &VAR_6) || VAR_9->dir)
  return;

 FUNC_1(VAR_10, 0, VAR_0);
 FUNC_4(VAR_10, "%d", VAR_8);


 VAR_9->dir = FUNC_3(VAR_10, VAR_7);
 VAR_11 = FUNC_0("spurious", 0444, VAR_9->dir);
 if (VAR_11) {
  VAR_11->data = (void *)(long)VAR_8;
  VAR_11->read_proc = VAR_5;
 }
}
