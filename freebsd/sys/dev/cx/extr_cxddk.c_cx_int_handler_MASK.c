
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; int port; int received_data; int received_len; int (* call_on_rx ) (TYPE_1__*,int ,int ) ;int (* call_on_msig ) (TYPE_1__*) ;int mintr; } ;
typedef TYPE_1__ cx_chan_t ;
struct TYPE_9__ {TYPE_1__* chan; int port; } ;
typedef TYPE_2__ cx_board_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;




 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 unsigned char FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int ,int ) ;

void FUNC_12 (cx_board_t *VAR_3)
{
 unsigned char VAR_4;
 cx_chan_t *VAR_5;

 while (! (FUNC_8 (FUNC_0(VAR_3->port)) & VAR_1)) {


  VAR_4 = FUNC_7 (FUNC_1(VAR_3->port, VAR_0));
  VAR_5 = VAR_3->chan + (VAR_4>>2 & 0xf);
  if (VAR_5->type == VAR_2)
   continue;
  switch (VAR_4 & 3) {
  case 130:
   ++VAR_5->mintr;
   if (VAR_5->call_on_msig)
    VAR_5->call_on_msig (VAR_5);
   FUNC_9 (FUNC_2(VAR_5->port), 0);
   break;
  case 131:
  case 129:
   FUNC_9 (FUNC_3(VAR_5->port), FUNC_5 (VAR_5));
   if (VAR_5->call_on_rx && VAR_5->received_data) {
    VAR_5->call_on_rx (VAR_5, VAR_5->received_data,
     VAR_5->received_len);
    VAR_5->received_data = 0;
   }
   break;
  case 128:
   FUNC_6 (VAR_5);
   FUNC_9 (FUNC_4(VAR_5->port), 0);
   break;
  }
 }
}
