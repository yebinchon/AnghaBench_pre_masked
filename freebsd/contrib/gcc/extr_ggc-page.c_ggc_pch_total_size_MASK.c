
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* totals; } ;
struct ggc_pch_data {TYPE_1__ d; } ;
struct TYPE_4__ {int pagesize; } ;


 TYPE_2__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int,int ) ;

size_t
FUNC_2 (struct ggc_pch_data *VAR_2)
{
  size_t VAR_3 = 0;
  unsigned VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
    VAR_3 += FUNC_1 (VAR_2->d.totals[VAR_4] * FUNC_0 (VAR_4), VAR_0.pagesize);
  return VAR_3;
}
