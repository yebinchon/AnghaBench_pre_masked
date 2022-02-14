
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_6__ {scalar_t__ format; } ;
typedef TYPE_1__ bfd ;


 int FUNC_0 (TYPE_1__*,int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;

bfd_boolean
FUNC_2 (bfd *VAR_5, bfd *VAR_6)
{
  if (VAR_5->format != VAR_2 || VAR_6->format != VAR_4)
    {
      FUNC_1 (VAR_3);
      return VAR_0;
    }

  return FUNC_0 (VAR_5, VAR_1,
     (VAR_5, VAR_6));
}
