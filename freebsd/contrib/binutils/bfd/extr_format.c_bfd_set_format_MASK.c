
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ bfd_format ;
typedef int bfd_boolean ;
struct TYPE_6__ {scalar_t__ format; } ;
typedef TYPE_1__ bfd ;


 int FUNC_0 (TYPE_1__*,int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

bfd_boolean
FUNC_3 (bfd *VAR_6, bfd_format VAR_7)
{
  if (FUNC_1 (VAR_6)
      || (unsigned int) VAR_6->format >= (unsigned int) VAR_4)
    {
      FUNC_2 (VAR_3);
      return VAR_0;
    }

  if (VAR_6->format != VAR_5)
    return VAR_6->format == VAR_7;


  VAR_6->format = VAR_7;

  if (!FUNC_0 (VAR_6, VAR_2, (VAR_6)))
    {
      VAR_6->format = VAR_5;
      return VAR_0;
    }

  return VAR_1;
}
