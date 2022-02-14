
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t* type_totals; size_t total; } ;
struct ggc_pch_data {size_t alloc_size; TYPE_1__ d; } ;
typedef enum gt_types_enum { ____Placeholder_gt_types_enum } gt_types_enum ;


 int VAR_0 ;
 size_t FUNC_0 (size_t,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (size_t,int ) ;

size_t
FUNC_2 (struct ggc_pch_data *VAR_4)
{
  enum gt_types_enum VAR_5;
  size_t VAR_6, VAR_7;

  VAR_7 = 0;
  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
    {
      VAR_4->d.type_totals[VAR_5] = FUNC_1 (VAR_4->d.type_totals[VAR_5], VAR_1);
      VAR_7 += VAR_4->d.type_totals[VAR_5];
    }
  VAR_4->d.total = VAR_7;


  VAR_6 = FUNC_0 (VAR_4->d.total, VAR_0 * 8);
  VAR_6 = FUNC_1 (VAR_6, VAR_2);
  VAR_4->alloc_size = VAR_6;

  return VAR_4->d.total + VAR_6;
}
