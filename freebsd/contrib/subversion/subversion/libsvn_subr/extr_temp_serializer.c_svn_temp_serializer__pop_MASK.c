
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* recycler; TYPE_2__* source; } ;
typedef TYPE_1__ svn_temp_serializer__context_t ;
struct TYPE_6__ {struct TYPE_6__* upper; } ;
typedef TYPE_2__ source_stack_t ;


 int FUNC_0 (TYPE_2__*) ;

void
FUNC_1(svn_temp_serializer__context_t *VAR_0)
{
  source_stack_t *VAR_1 = VAR_0->source;


  FUNC_0(VAR_0->source);


  VAR_0->source = VAR_0->source->upper;


  VAR_1->upper = VAR_0->recycler;
  VAR_0->recycler = VAR_1;
}
