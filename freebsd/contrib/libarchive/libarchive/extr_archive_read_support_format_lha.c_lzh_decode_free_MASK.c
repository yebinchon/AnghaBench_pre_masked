
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lzh_stream {TYPE_1__* ds; } ;
struct TYPE_2__ {int pt; int lt; struct TYPE_2__* w_buff; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct lzh_stream *VAR_0)
{

 if (VAR_0->ds == ((void*)0))
  return;
 FUNC_0(VAR_0->ds->w_buff);
 FUNC_1(&(VAR_0->ds->lt));
 FUNC_1(&(VAR_0->ds->pt));
 FUNC_0(VAR_0->ds);
 VAR_0->ds = ((void*)0);
}
