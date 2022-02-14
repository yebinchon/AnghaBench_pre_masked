
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dos_ttystate {scalar_t__ count; int* cbuf; size_t first; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2 (volatile struct dos_ttystate *VAR_1)
{
  int VAR_2;

  if (VAR_1->count == 0)
    return -1;

  VAR_2 = VAR_1->cbuf[VAR_1->first];
  FUNC_0 ();
  VAR_1->first = (VAR_1->first + 1) & (VAR_0 - 1);
  VAR_1->count--;
  FUNC_1 ();
  return VAR_2;
}
