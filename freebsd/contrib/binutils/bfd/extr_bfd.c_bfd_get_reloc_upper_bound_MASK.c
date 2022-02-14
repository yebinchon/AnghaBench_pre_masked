
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sec_ptr ;
struct TYPE_5__ {scalar_t__ format; } ;
typedef TYPE_1__ bfd ;


 long FUNC_0 (TYPE_1__*,int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;

long
FUNC_2 (bfd *VAR_3, sec_ptr VAR_4)
{
  if (VAR_3->format != VAR_2)
    {
      FUNC_1 (VAR_1);
      return -1;
    }

  return FUNC_0 (VAR_3, VAR_0, (VAR_3, VAR_4));
}
