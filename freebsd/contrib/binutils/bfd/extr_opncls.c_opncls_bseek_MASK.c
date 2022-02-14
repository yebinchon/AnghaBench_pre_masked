
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opncls {int where; } ;
struct bfd {struct opncls* iostream; } ;
typedef int file_ptr ;






__attribute__((used)) static int
FUNC_0 (struct bfd *VAR_0, file_ptr VAR_1, int VAR_2)
{
  struct opncls *VAR_3 = VAR_0->iostream;
  switch (VAR_2)
    {
    case 128: VAR_3->where = VAR_1; break;
    case 130: VAR_3->where += VAR_1; break;
    case 129: return -1;
    }
  return 0;
}
