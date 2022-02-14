
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ me_record; } ;
struct TYPE_6__ {scalar_t__* offset; TYPE_1__ r; } ;
struct TYPE_7__ {TYPE_2__ w; } ;
typedef TYPE_3__ ieee_data_type ;
typedef scalar_t__ file_ptr ;


 int VAR_0 ;

__attribute__((used)) static file_ptr
FUNC_0 (ieee_data_type *VAR_1, file_ptr VAR_2)
{
  int VAR_3;
  file_ptr VAR_4 = VAR_1->w.r.me_record;



  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    if (VAR_1->w.offset[VAR_3] > VAR_2 && VAR_4 > VAR_1->w.offset[VAR_3])
      VAR_4 = VAR_1->w.offset[VAR_3];

  return VAR_4;
}
