
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct stat {int st_mode; scalar_t__ st_size; } ;
struct TYPE_11__ {scalar_t__ me_record; } ;
struct TYPE_12__ {TYPE_1__ r; } ;
struct TYPE_15__ {TYPE_2__ w; } ;
typedef TYPE_5__ ieee_data_type ;
typedef int ieee_ar_data_type ;
struct TYPE_16__ {TYPE_4__* my_archive; } ;
typedef TYPE_6__ bfd ;
struct TYPE_13__ {int * ieee_ar_data; } ;
struct TYPE_14__ {TYPE_3__ tdata; } ;


 TYPE_5__* FUNC_0 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (TYPE_6__*) ;

__attribute__((used)) static int
FUNC_3 (bfd *VAR_2, struct stat *VAR_3)
{
  ieee_ar_data_type *VAR_4 = (ieee_ar_data_type *) ((void*)0);
  ieee_data_type *VAR_5;

  if (VAR_2->my_archive != ((void*)0))
    VAR_4 = VAR_2->my_archive->tdata.ieee_ar_data;
  if (VAR_4 == (ieee_ar_data_type *) ((void*)0))
    {
      FUNC_1 (VAR_0);
      return -1;
    }

  if (FUNC_0 (VAR_2) == ((void*)0))
    {
      if (FUNC_2 (VAR_2) == ((void*)0))
 {
   FUNC_1 (VAR_1);
   return -1;
 }
    }

  VAR_5 = FUNC_0 (VAR_2);

  VAR_3->st_size = VAR_5->w.r.me_record + 1;
  VAR_3->st_mode = 0644;
  return 0;
}
