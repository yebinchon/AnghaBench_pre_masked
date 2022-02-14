
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
struct spglist {int dummy; } ;
struct TYPE_7__ {int ss; } ;
struct TYPE_9__ {TYPE_1__ s; } ;
struct TYPE_8__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct spglist*,TYPE_2__*,int ) ;
 TYPE_5__ VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static __inline void
FUNC_2(vm_page_t VAR_2, struct spglist *VAR_3)
{
 VAR_2->flags |= VAR_0;
 FUNC_0(VAR_3, VAR_2, VAR_1.s.ss);
}
