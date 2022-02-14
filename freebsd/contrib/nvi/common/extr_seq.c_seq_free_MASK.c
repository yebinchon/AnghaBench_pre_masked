
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* output; struct TYPE_4__* input; struct TYPE_4__* name; } ;
typedef TYPE_1__ SEQ ;


 int FUNC_0 (TYPE_1__*) ;

int
FUNC_1(SEQ *VAR_0)
{
 if (VAR_0->name != ((void*)0))
  FUNC_0(VAR_0->name);
 if (VAR_0->input != ((void*)0))
  FUNC_0(VAR_0->input);
 if (VAR_0->output != ((void*)0))
  FUNC_0(VAR_0->output);
 FUNC_0(VAR_0);
 return (0);
}
