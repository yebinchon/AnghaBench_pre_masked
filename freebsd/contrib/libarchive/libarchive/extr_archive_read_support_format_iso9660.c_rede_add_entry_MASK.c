
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct file_info** last; } ;
struct file_info {struct file_info* re_next; TYPE_1__ rede_files; struct file_info* parent; int re; } ;



__attribute__((used)) static inline int
FUNC_0(struct file_info *VAR_0)
{
 struct file_info *VAR_1;




 VAR_1 = VAR_0->parent;
 while (VAR_1 != ((void*)0) && !VAR_1->re)
  VAR_1 = VAR_1->parent;
 if (VAR_1 == ((void*)0))
  return (-1);

 VAR_0->re_next = ((void*)0);
 *VAR_1->rede_files.last = VAR_0;
 VAR_1->rede_files.last = &(VAR_0->re_next);
 return (0);
}
