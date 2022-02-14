
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int reference_count; } ;
typedef TYPE_1__ memory_page_t ;
struct TYPE_5__ {scalar_t__ page_count; int page_size; } ;
typedef scalar_t__ LONGEST ;
typedef int CORE_ADDR ;


 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 TYPE_2__ VAR_0 ;
 int FUNC_3 () ;

int
FUNC_4 (int VAR_1, CORE_ADDR VAR_2, LONGEST VAR_3, int VAR_4)
{
  CORE_ADDR VAR_5;
  int VAR_6;
  int VAR_7;
  int VAR_8;
  LONGEST VAR_9;

  if (VAR_4 != 0)
    FUNC_0 ("read or access hardware watchpoints not supported on HP-UX");


  FUNC_3 ();

  VAR_6 = (VAR_0.page_count == (LONGEST) 0);

  VAR_7 = VAR_0.page_size;
  VAR_5 = (VAR_2 / VAR_7) * VAR_7;
  VAR_9 = ((LONGEST) VAR_3 + (LONGEST) VAR_7 - 1) / (LONGEST) VAR_7;

  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++, VAR_5 += VAR_7)
    {
      memory_page_t *VAR_10;




      VAR_10 = FUNC_1 (VAR_1, VAR_5);
      VAR_10->reference_count++;
    }
  if (VAR_6)
    FUNC_2 (VAR_1);

  return 1;
}
