
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int ocs_t ;
struct TYPE_5__ {size_t textbuf_count; struct TYPE_5__* textbufs; int lock; } ;
typedef TYPE_1__ ocs_ramlog_t ;


 int FUNC_0 (int *,TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;

void
FUNC_3(ocs_t *VAR_0, ocs_ramlog_t *VAR_1)
{
 uint32_t VAR_2;

 if (VAR_1 != ((void*)0)) {
  FUNC_1(&VAR_1->lock);
  if (VAR_1->textbufs) {
   for (VAR_2 = 0; VAR_2 < VAR_1->textbuf_count; VAR_2 ++) {
    FUNC_2(VAR_0, &VAR_1->textbufs[VAR_2]);
   }

   FUNC_0(VAR_0, VAR_1->textbufs, VAR_1->textbuf_count*sizeof(*VAR_1->textbufs));
   VAR_1->textbufs = ((void*)0);
  }
  FUNC_0(VAR_0, VAR_1, sizeof(*VAR_1));
 }
}
