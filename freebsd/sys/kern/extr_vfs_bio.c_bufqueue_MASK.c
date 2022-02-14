
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bufqueue {int dummy; } ;
struct buf {int b_qindex; size_t b_subqueue; } ;
struct TYPE_2__ {struct bufqueue* bd_subq; struct bufqueue bd_dirtyq; } ;







 struct bufqueue VAR_0 ;
 TYPE_1__* FUNC_0 (struct buf*) ;
 int FUNC_1 (char*,struct buf*,int) ;

__attribute__((used)) static struct bufqueue *
FUNC_2(struct buf *VAR_1)
{

 switch (VAR_1->b_qindex) {
 case 129:

 case 128:
  return (((void*)0));
 case 130:
  return (&VAR_0);
 case 131:
  return (&FUNC_0(VAR_1)->bd_dirtyq);
 case 132:
  return (&FUNC_0(VAR_1)->bd_subq[VAR_1->b_subqueue]);
 default:
  break;
 }
 FUNC_1("bufqueue(%p): Unhandled type %d\n", VAR_1, VAR_1->b_qindex);
}
