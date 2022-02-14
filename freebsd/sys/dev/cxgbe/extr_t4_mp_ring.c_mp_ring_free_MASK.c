
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_ring {int mt; int * abdications; int * restarts; int * stalls; int * starts; int * drops; int * enqueues; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mp_ring*,int ) ;

void

FUNC_2(struct mp_ring *VAR_0)
{

 if (VAR_0 == ((void*)0))
  return;

 if (VAR_0->enqueues != ((void*)0))
  FUNC_0(VAR_0->enqueues);
 if (VAR_0->drops != ((void*)0))
  FUNC_0(VAR_0->drops);
 if (VAR_0->starts != ((void*)0))
  FUNC_0(VAR_0->starts);
 if (VAR_0->stalls != ((void*)0))
  FUNC_0(VAR_0->stalls);
 if (VAR_0->restarts != ((void*)0))
  FUNC_0(VAR_0->restarts);
 if (VAR_0->abdications != ((void*)0))
  FUNC_0(VAR_0->abdications);

 FUNC_1(VAR_0, VAR_0->mt);
}
