
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state_in_ch; scalar_t__ state_in_len; } ;
typedef TYPE_1__ EState ;
typedef int Bool ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static
Bool FUNC_0 ( EState* VAR_2 )
{
   if (VAR_2->state_in_ch < 256 && VAR_2->state_in_len > 0)
      return VAR_0; else
      return VAR_1;
}
