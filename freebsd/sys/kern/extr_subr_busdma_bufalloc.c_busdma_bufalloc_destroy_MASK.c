
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct busdma_bufzone {int umazone; } ;
typedef TYPE_1__* busdma_bufalloc_t ;
struct TYPE_4__ {int num_zones; struct busdma_bufzone* buf_zones; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;

void
FUNC_2(busdma_bufalloc_t VAR_1)
{
 struct busdma_bufzone *VAR_2;
 int VAR_3;

 if (VAR_1 == ((void*)0))
  return;

 for (VAR_3 = 0, VAR_2 = VAR_1->buf_zones; VAR_3 < VAR_1->num_zones; ++VAR_3, ++VAR_2) {
  FUNC_1(VAR_2->umazone);
 }

 FUNC_0(VAR_1, VAR_0);
}
