
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* bfd_section; } ;
typedef TYPE_1__ segment_info_type ;
typedef void* segT ;


 int FUNC_0 (int ,void*,TYPE_1__*) ;
 void* VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (void*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int,int) ;

void
FUNC_3 (register segT VAR_3, register int VAR_4)
{
  segment_info_type *VAR_5 = FUNC_1 (VAR_3);
  VAR_0 = VAR_3;
  VAR_1 = VAR_4;

  if (! VAR_5)
    {
      VAR_5 = FUNC_2 (1, sizeof (*VAR_5));
      VAR_5->bfd_section = VAR_3;
      (void) FUNC_0 (VAR_2, VAR_3, VAR_5);
    }
}
