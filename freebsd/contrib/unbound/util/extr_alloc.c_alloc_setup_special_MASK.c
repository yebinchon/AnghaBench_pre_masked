
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* key; int lock; } ;
struct TYPE_6__ {TYPE_1__ entry; } ;
typedef TYPE_2__ alloc_special_type ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void
FUNC_2(alloc_special_type* VAR_0)
{
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
 FUNC_0(&VAR_0->entry.lock);
 VAR_0->entry.key = VAR_0;
}
