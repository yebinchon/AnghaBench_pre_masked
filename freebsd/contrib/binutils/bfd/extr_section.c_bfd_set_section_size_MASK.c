
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* sec_ptr ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_6__ {scalar_t__ output_has_begun; } ;
typedef TYPE_2__ bfd ;
struct TYPE_5__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

bfd_boolean
FUNC_1 (bfd *VAR_3, sec_ptr VAR_4, bfd_size_type VAR_5)
{



  if (VAR_3->output_has_begun)
    {
      FUNC_0 (VAR_2);
      return VAR_0;
    }

  VAR_4->size = VAR_5;
  return VAR_1;
}
