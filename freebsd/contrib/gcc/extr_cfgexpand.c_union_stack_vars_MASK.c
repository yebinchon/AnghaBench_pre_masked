
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t next; size_t representative; scalar_t__ alignb; int offset; } ;
typedef scalar_t__ HOST_WIDE_INT ;


 size_t VAR_0 ;
 int FUNC_0 (size_t,size_t) ;
 scalar_t__ FUNC_1 (size_t,size_t) ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void
FUNC_2 (size_t VAR_3, size_t VAR_4, HOST_WIDE_INT VAR_5)
{
  size_t VAR_6, VAR_7;



  for (VAR_7 = VAR_6 = VAR_4; VAR_6 != VAR_0; VAR_7 = VAR_6, VAR_6 = VAR_1[VAR_6].next)
    {
      VAR_1[VAR_6].offset += VAR_5;
      VAR_1[VAR_6].representative = VAR_3;
    }
  VAR_1[VAR_7].next = VAR_1[VAR_3].next;
  VAR_1[VAR_3].next = VAR_4;


  if (VAR_1[VAR_3].alignb < VAR_1[VAR_4].alignb)
    VAR_1[VAR_3].alignb = VAR_1[VAR_4].alignb;


  for (VAR_7 = VAR_2, VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6)
    if (FUNC_1 (VAR_4, VAR_6))
      FUNC_0 (VAR_3, VAR_6);
}
