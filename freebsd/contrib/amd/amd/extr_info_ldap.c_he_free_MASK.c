
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* host; } ;
typedef TYPE_1__ HE_ENT ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(HE_ENT *VAR_0)
{
  FUNC_0(VAR_0->host);
  if (VAR_0->next != ((void*)0))
    FUNC_1(VAR_0->next);
  FUNC_0(VAR_0);
}
