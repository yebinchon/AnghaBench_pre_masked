
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int8_t ;
struct TYPE_5__ {int nr_segments; TYPE_1__* seg; } ;
typedef TYPE_2__ blkif_request_t ;
struct TYPE_4__ {scalar_t__ first_sect; scalar_t__ last_sect; } ;



__attribute__((used)) static __inline int
FUNC_0(blkif_request_t *VAR_0)
{
 int VAR_1;
 int VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_segments; VAR_1++) {
  int VAR_3;

  VAR_3 = (int8_t)(VAR_0->seg[VAR_1].last_sect -
   VAR_0->seg[VAR_1].first_sect + 1);
  if (VAR_3 <= 0)
   break;

  VAR_2 += VAR_3;
 }

 return (VAR_2);
}
