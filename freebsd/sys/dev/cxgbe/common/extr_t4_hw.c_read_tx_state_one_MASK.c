
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct port_tx_state {void* tx_frames; void* rx_pause; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (struct adapter*) ;
 void* FUNC_3 (struct adapter*,int ) ;

__attribute__((used)) static void
FUNC_4(struct adapter *VAR_2, int VAR_3, struct port_tx_state *VAR_4)
{
 uint32_t VAR_5, VAR_6;

 if (FUNC_2(VAR_2)) {
  VAR_6 = FUNC_0(VAR_3, VAR_1);
  VAR_5 = FUNC_0(VAR_3, VAR_0);
 } else {
  VAR_6 = FUNC_1(VAR_3, VAR_1);
  VAR_5 = FUNC_1(VAR_3, VAR_0);
 }

 VAR_4->rx_pause = FUNC_3(VAR_2, VAR_5);
 VAR_4->tx_frames = FUNC_3(VAR_2, VAR_6);
}
