
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dos_ttystate {int count; int* cbuf; int first; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0 (int VAR_1, struct dos_ttystate *VAR_2)
{
  if (VAR_2->count >= VAR_0 - 1)
    return -1;
  VAR_2->cbuf[(VAR_2->first + VAR_2->count) & (VAR_0 - 1)] = VAR_1;
  VAR_2->count++;
  return 0;
}
