
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * first; int ** last; } ;
struct iso9660 {TYPE_1__ data_file_list; } ;



__attribute__((used)) static void
FUNC_0(struct iso9660 *VAR_0)
{
 VAR_0->data_file_list.first = ((void*)0);
 VAR_0->data_file_list.last = &(VAR_0->data_file_list.first);
}
