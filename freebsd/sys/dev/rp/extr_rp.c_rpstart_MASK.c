
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct tty {int dummy; } ;
struct TYPE_7__ {char* TxControl; } ;
struct rp_port {int * TxBuf; scalar_t__ rp_xmit_stopped; TYPE_1__ rp_channel; } ;
typedef TYPE_1__ CHANNEL_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 struct rp_port* FUNC_6 (struct tty*) ;
 int FUNC_7 (struct tty*,int **,int) ;

__attribute__((used)) static void
FUNC_8(struct tty *VAR_1)
{
 struct rp_port *VAR_2;
 CHANNEL_t *VAR_3;
 char VAR_4;
 int VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_2 = FUNC_6(VAR_1);
 VAR_3 = &VAR_2->rp_channel;
 VAR_4 = VAR_2->rp_channel.TxControl[3];

 if(VAR_2->rp_xmit_stopped) {
  FUNC_3(VAR_3);
  VAR_2->rp_xmit_stopped = 0;
 }

 VAR_5 = VAR_0 - FUNC_4(VAR_3);
 VAR_7 = FUNC_7(VAR_1, &VAR_2->TxBuf, VAR_5);
 if(VAR_5 > 0) {
  for( VAR_6 = 0, VAR_8 = VAR_7 >> 1; VAR_8 > 0; VAR_6 += 2, VAR_8-- ) {
   FUNC_2(VAR_3, FUNC_5(VAR_3), FUNC_0(&VAR_2->TxBuf[VAR_6]));
  }
  if ( VAR_7 & 1 ) {
   FUNC_1(VAR_3, FUNC_5(VAR_3), VAR_2->TxBuf[(VAR_7-1)]);
  }
 }
}
