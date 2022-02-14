
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtree_entry {TYPE_2__* dir_info; } ;
struct TYPE_3__ {struct mtree_entry** last; } ;
struct TYPE_4__ {struct mtree_entry* chnext; TYPE_1__ children; } ;



__attribute__((used)) static int
FUNC_0(struct mtree_entry *VAR_0,
    struct mtree_entry *VAR_1)
{
 VAR_1->dir_info->chnext = ((void*)0);
 *VAR_0->dir_info->children.last = VAR_1;
 VAR_0->dir_info->children.last = &(VAR_1->dir_info->chnext);
 return (1);
}
