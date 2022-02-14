
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rl_chain_data {scalar_t__ last_tx; scalar_t__ cur_tx; int ** rl_tx_chain; } ;
struct rl_softc {struct rl_chain_data rl_cdata; } ;


 int FUNC_0 (struct rl_softc*,scalar_t__,int) ;
 int FUNC_1 (struct rl_softc*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct rl_softc *VAR_2)
{
 struct rl_chain_data *VAR_3;
 int VAR_4;

 FUNC_1(VAR_2);

 VAR_3 = &VAR_2->rl_cdata;
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3->rl_tx_chain[VAR_4] = ((void*)0);
  FUNC_0(VAR_2,
      VAR_0 + (VAR_4 * sizeof(uint32_t)), 0x0000000);
 }

 VAR_2->rl_cdata.cur_tx = 0;
 VAR_2->rl_cdata.last_tx = 0;

 return (0);
}
