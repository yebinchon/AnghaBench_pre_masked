
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num; scalar_t__ mode; int port; } ;
typedef TYPE_1__ cx_chan_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int) ;

void FUNC_5 (cx_chan_t *VAR_5, int VAR_6)
{
 if (FUNC_3(VAR_5) && ! VAR_6) {
  FUNC_4 (FUNC_0(VAR_5->port), VAR_5->num & 3);
  if (VAR_5->mode != VAR_2)
   FUNC_4 (FUNC_1(VAR_5->port), VAR_3 | VAR_4);
  FUNC_2 (VAR_5->port, VAR_0);
 } else if (! FUNC_3(VAR_5) && VAR_6) {
  FUNC_4 (FUNC_0(VAR_5->port), VAR_5->num & 3);
  FUNC_2 (VAR_5->port, VAR_1);
 }
}
