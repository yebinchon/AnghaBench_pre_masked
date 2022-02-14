
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ms_allocator; int ms_start; int ms_weight; scalar_t__ ms_primary; } ;
typedef TYPE_1__ metaslab_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(const void *VAR_0, const void *VAR_1)
{
 const metaslab_t *VAR_2 = (const metaslab_t *)VAR_0;
 const metaslab_t *VAR_3 = (const metaslab_t *)VAR_1;

 int VAR_4 = 0;
 int VAR_5 = 0;
 if (VAR_2->ms_allocator != -1 && VAR_2->ms_primary)
  VAR_4 = 1;
 else if (VAR_2->ms_allocator != -1 && !VAR_2->ms_primary)
  VAR_4 = 2;
 if (VAR_3->ms_allocator != -1 && VAR_3->ms_primary)
  VAR_5 = 1;
 else if (VAR_3->ms_allocator != -1 && !VAR_3->ms_primary)
  VAR_5 = 2;
 if (VAR_4 < VAR_5)
  return (-1);
 if (VAR_4 > VAR_5)
  return (1);

 int VAR_6 = FUNC_0(VAR_3->ms_weight, VAR_2->ms_weight);
 if (FUNC_2(VAR_6))
  return (VAR_6);

 FUNC_1(FUNC_0(VAR_2->ms_start, VAR_3->ms_start) == 0, VAR_2 == VAR_3);

 return (FUNC_0(VAR_2->ms_start, VAR_3->ms_start));
}
