
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uInt ;
struct TYPE_4__ {int status; int traps; } ;
typedef TYPE_1__ decContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

decContext *
FUNC_1 (decContext * VAR_1, uInt VAR_2)
{
  VAR_1->status |= VAR_2;
  if (VAR_2 & VAR_1->traps)
    FUNC_0 (VAR_0);
  return VAR_1;
}
