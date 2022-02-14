
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loops {unsigned int num; int state; struct loop** parray; } ;
struct loop {scalar_t__ latch; scalar_t__ header; } ;
typedef int edge ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

void
FUNC_3 (struct loops *VAR_2)
{
  unsigned VAR_3;
  struct loop *VAR_4;
  edge VAR_5;

  for (VAR_3 = 1; VAR_3 < VAR_2->num; VAR_3++)
    {
      VAR_4 = VAR_2->parray[VAR_3];
      if (VAR_4->latch != VAR_4->header && FUNC_2 (VAR_4->latch))
 continue;

      VAR_5 = FUNC_0 (VAR_4->latch, VAR_4->header);

      FUNC_1 (VAR_5, VAR_1);
    }
  VAR_2->state |= VAR_0;
}
