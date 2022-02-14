
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ usb_checksum; } ;
struct rtwn_tx_desc_common {TYPE_1__ txdw7; } ;


 scalar_t__ FUNC_0 (struct rtwn_tx_desc_common*) ;

__attribute__((used)) static void
FUNC_1(struct rtwn_tx_desc_common *VAR_0)
{
 VAR_0->txdw7.usb_checksum = 0;
 VAR_0->txdw7.usb_checksum = FUNC_0(VAR_0);
}
