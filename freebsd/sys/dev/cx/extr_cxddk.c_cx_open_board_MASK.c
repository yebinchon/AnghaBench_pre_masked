
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int port_t ;
struct TYPE_6__ {scalar_t__ call_on_err; scalar_t__ call_on_msig; scalar_t__ call_on_rx; scalar_t__ call_on_tx; } ;
typedef TYPE_1__ cx_chan_t ;
struct TYPE_7__ {TYPE_1__* chan; } ;
typedef TYPE_2__ cx_board_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int,int ,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ) ;

int FUNC_3 (cx_board_t *VAR_5, int VAR_6, port_t VAR_7, int VAR_8, int VAR_9)
{
 cx_chan_t *VAR_10;

 if (VAR_6 >= VAR_0 || ! FUNC_1 (VAR_7, VAR_8, VAR_9))
  return 0;


 for (VAR_10=VAR_5->chan; VAR_10<VAR_5->chan+VAR_1; ++VAR_10) {
  VAR_10->call_on_tx = 0;
  VAR_10->call_on_rx = 0;
  VAR_10->call_on_msig = 0;
  VAR_10->call_on_err = 0;
 }

 FUNC_0 (VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);


 if (! FUNC_2 (VAR_5, VAR_2, VAR_3, VAR_4))
  return 0;
 return 1;
}
