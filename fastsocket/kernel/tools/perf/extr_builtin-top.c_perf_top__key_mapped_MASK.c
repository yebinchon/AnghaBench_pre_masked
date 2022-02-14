
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_top {TYPE_1__* evlist; } ;
struct TYPE_2__ {int nr_entries; } ;



__attribute__((used)) static int FUNC_0(struct perf_top *VAR_0, int VAR_1)
{
 switch (VAR_1) {
  case 'd':
  case 'e':
  case 'f':
  case 'z':
  case 'q':
  case 'Q':
  case 'K':
  case 'U':
  case 'F':
  case 's':
  case 'S':
   return 1;
  case 'E':
   return VAR_0->evlist->nr_entries > 1 ? 1 : 0;
  default:
   break;
 }

 return 0;
}
