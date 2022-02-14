
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ieee_data_type ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_5__ {int * ieee_data; } ;
struct TYPE_6__ {TYPE_1__ tdata; } ;
typedef TYPE_2__ bfd ;


 int * FUNC_0 (TYPE_2__*,int) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;

__attribute__((used)) static bfd_boolean
FUNC_1 (bfd *VAR_9)
{
  bfd_size_type VAR_10;

  VAR_8 = ((void*)0);
  VAR_6 = ((void*)0);
  VAR_7 = ((void*)0);
  VAR_3 = ((void*)0);
  VAR_1 = ((void*)0);
  VAR_2 = ((void*)0);
  VAR_0 = ((void*)0);
  VAR_4 = ((void*)0);
  VAR_5 = 0;
  VAR_10 = sizeof (ieee_data_type);
  VAR_9->tdata.ieee_data = FUNC_0 (VAR_9, VAR_10);
  return VAR_9->tdata.ieee_data != ((void*)0);
}
