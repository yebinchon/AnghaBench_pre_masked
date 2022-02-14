
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int t_cflag; int t_state; scalar_t__ t_actout; int t_dev; } ;
struct rp_port {int rp_channel; } ;
typedef int CHANNEL_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__* FUNC_1 (struct tty*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct rp_port* FUNC_11 (struct tty*) ;
 int FUNC_12 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_13(struct tty *VAR_8)
{
 struct rp_port *VAR_9;
 CHANNEL_t *VAR_10;

 VAR_9 = FUNC_11(VAR_8);
 VAR_10 = &VAR_9->rp_channel;

 FUNC_9(VAR_10);
 FUNC_10(VAR_10);
 FUNC_7(VAR_10);
 FUNC_5(VAR_10, VAR_7|VAR_3|VAR_4|VAR_5|VAR_0);
 FUNC_6(VAR_10);
 FUNC_4(VAR_10);
 FUNC_8(VAR_10);
 FUNC_3(VAR_10);
}
