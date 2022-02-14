
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct artdata {int dummy; } ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_6__ {int aout_ar_data; } ;
struct TYPE_7__ {TYPE_1__ tdata; } ;
typedef TYPE_2__ bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;

bfd_boolean
FUNC_2 (bfd *VAR_2)
{
  bfd_size_type VAR_3 = sizeof (struct artdata);

  VAR_2->tdata.aout_ar_data = FUNC_1 (VAR_2, VAR_3);
  if (FUNC_0 (VAR_2) == ((void*)0))
    return VAR_0;
  return VAR_1;
}
