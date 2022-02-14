
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ mode; } ;
typedef TYPE_1__ ct_chan_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,unsigned long) ;
 int FUNC_1 (TYPE_1__*,unsigned long) ;

void FUNC_2 (ct_chan_t *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;

 if (VAR_2->mode == VAR_0)
  return;
 if (VAR_2->mode == VAR_1) {
  if (VAR_3 >= 2048000) VAR_4 = 2048;
  else if (VAR_3 >= 1024000) VAR_4 = 1024;
  else if (VAR_3 >= 512000) VAR_4 = 512;
  else if (VAR_3 >= 256000) VAR_4 = 256;
  else if (VAR_3 >= 128000) VAR_4 = 128;
  else VAR_4 = 64;
  FUNC_1 (VAR_2, VAR_4);
 } else
  FUNC_0 (VAR_2, VAR_3);
}
