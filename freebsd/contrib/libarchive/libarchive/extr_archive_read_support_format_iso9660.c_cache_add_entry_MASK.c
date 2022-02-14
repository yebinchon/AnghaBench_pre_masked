
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct file_info** last; } ;
struct iso9660 {TYPE_1__ cache_files; } ;
struct file_info {struct file_info* next; } ;



__attribute__((used)) static inline void
FUNC_0(struct iso9660 *VAR_0, struct file_info *VAR_1)
{
 VAR_1->next = ((void*)0);
 *VAR_0->cache_files.last = VAR_1;
 VAR_0->cache_files.last = &(VAR_1->next);
}
