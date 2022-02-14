
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watch_area {struct watch_area* next; void* hi_addr; void* lo_addr; } ;
typedef void* CORE_ADDR ;


 int FUNC_0 () ;
 struct watch_area* VAR_0 ;
 struct watch_area* FUNC_1 (int) ;

int
FUNC_2 (CORE_ADDR VAR_1, int VAR_2)
{
  struct watch_area *VAR_3 = FUNC_1 (sizeof (struct watch_area));
  if (!VAR_3)
    return -1;

  VAR_3->lo_addr = VAR_1;
  VAR_3->hi_addr = VAR_1 + VAR_2 - 1;

  VAR_3->next = VAR_0;
  VAR_0 = VAR_3;

  FUNC_0 ();
  return 0;
}
