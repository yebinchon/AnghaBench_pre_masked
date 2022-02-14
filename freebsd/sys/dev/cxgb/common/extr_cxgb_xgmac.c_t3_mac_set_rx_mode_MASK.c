
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct t3_rx_mode {TYPE_1__* port; } ;
struct t3_mcaddr_ctx {int hash_lo; int hash_hi; struct cmac* mac; } ;
struct cmac {unsigned int offset; int promisc_map; int ext_port; scalar_t__ multiport; int * adapter; } ;
typedef int adapter_t ;
struct TYPE_2__ {int ifp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct t3_rx_mode*) ;
 int FUNC_1 (int ,int ,struct t3_mcaddr_ctx*) ;
 scalar_t__ FUNC_2 (struct t3_rx_mode*) ;
 int VAR_4 ;
 int FUNC_3 (int *,scalar_t__,int ,int ) ;
 int FUNC_4 (int *,scalar_t__,int) ;

int FUNC_5(struct cmac *VAR_5, struct t3_rx_mode *VAR_6)
{
 struct t3_mcaddr_ctx VAR_7;
 adapter_t *VAR_8 = VAR_5->adapter;
 unsigned int VAR_9 = VAR_5->offset;

 if (FUNC_2(VAR_6))
  VAR_5->promisc_map |= 1 << VAR_5->ext_port;
 else
  VAR_5->promisc_map &= ~(1 << VAR_5->ext_port);
 FUNC_3(VAR_8, VAR_0 + VAR_9, VAR_3,
    VAR_5->promisc_map ? VAR_3 : 0);

 if (FUNC_0(VAR_6) || VAR_5->multiport)
  VAR_7.hash_lo = VAR_7.hash_hi = 0xffffffff;
 else {
  VAR_7.mac = VAR_5;
  VAR_7.hash_lo = VAR_7.hash_hi = 0;
  FUNC_1(VAR_6->port->ifp, VAR_4, &VAR_7);
 }

 FUNC_4(VAR_8, VAR_2 + VAR_9, VAR_7.hash_lo);
 FUNC_4(VAR_8, VAR_1 + VAR_9, VAR_7.hash_hi);
 return 0;
}
