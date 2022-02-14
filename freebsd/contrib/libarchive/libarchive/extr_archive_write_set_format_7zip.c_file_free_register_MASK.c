
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {struct file* next; } ;
struct TYPE_2__ {struct file* first; } ;
struct _7zip {TYPE_1__ file_list; } ;


 int FUNC_0 (struct file*) ;

__attribute__((used)) static void
FUNC_1(struct _7zip *VAR_0)
{
 struct file *VAR_1, *VAR_2;

 VAR_1 = VAR_0->file_list.first;
 while (VAR_1 != ((void*)0)) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
}
