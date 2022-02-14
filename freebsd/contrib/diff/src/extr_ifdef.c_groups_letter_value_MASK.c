
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {int from; int upto; int file; } ;
typedef int lin ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static lin
FUNC_1 (struct group const *VAR_0, char VAR_1)
{
  switch (VAR_1)
    {
    case 'E': VAR_1 = 'e'; VAR_0++; break;
    case 'F': VAR_1 = 'f'; VAR_0++; break;
    case 'L': VAR_1 = 'l'; VAR_0++; break;
    case 'M': VAR_1 = 'm'; VAR_0++; break;
    case 'N': VAR_1 = 'n'; VAR_0++; break;
    }

  switch (VAR_1)
    {
      case 'e': return FUNC_0 (VAR_0->file, VAR_0->from) - 1;
      case 'f': return FUNC_0 (VAR_0->file, VAR_0->from);
      case 'l': return FUNC_0 (VAR_0->file, VAR_0->upto) - 1;
      case 'm': return FUNC_0 (VAR_0->file, VAR_0->upto);
      case 'n': return VAR_0->upto - VAR_0->from;
      default: return -1;
    }
}
