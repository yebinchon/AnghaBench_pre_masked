
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isofile {struct isofile* allnext; } ;
struct TYPE_2__ {struct isofile** last; } ;
struct iso9660 {TYPE_1__ all_file_list; } ;



__attribute__((used)) static void
FUNC_0(struct iso9660 *VAR_0, struct isofile *VAR_1)
{
 VAR_1->allnext = ((void*)0);
 *VAR_0->all_file_list.last = VAR_1;
 VAR_0->all_file_list.last = &(VAR_1->allnext);
}
