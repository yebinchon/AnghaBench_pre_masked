
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int node; } ;
struct TYPE_6__ {TYPE_3__* map; } ;
struct hist_entry {TYPE_1__ pairs; int callchain; TYPE_2__ ms; } ;
struct callchain_root {int dummy; } ;
struct TYPE_8__ {scalar_t__ use_callchain; } ;
struct TYPE_7__ {int referenced; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct hist_entry* FUNC_2 (int) ;
 TYPE_4__ VAR_0 ;

__attribute__((used)) static struct hist_entry *FUNC_3(struct hist_entry *VAR_1)
{
 size_t VAR_2 = VAR_0.use_callchain ? sizeof(struct callchain_root) : 0;
 struct hist_entry *VAR_3 = FUNC_2(sizeof(*VAR_3) + VAR_2);

 if (VAR_3 != ((void*)0)) {
  *VAR_3 = *VAR_1;

  if (VAR_3->ms.map)
   VAR_3->ms.map->referenced = 1;
  if (VAR_0.use_callchain)
   FUNC_1(VAR_3->callchain);

  FUNC_0(&VAR_3->pairs.node);
 }

 return VAR_3;
}
