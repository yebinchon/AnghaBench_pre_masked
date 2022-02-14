
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sfxge_softc {int enp; scalar_t__ txq_dynamic_cksum_toggle_supported; } ;
typedef enum sfxge_txq_type { ____Placeholder_sfxge_txq_type } sfxge_txq_type ;
struct TYPE_2__ {scalar_t__ enc_hw_tx_insert_vlan_enabled; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static unsigned int
FUNC_3(const struct sfxge_softc *VAR_7, enum sfxge_txq_type VAR_8,
        unsigned int VAR_9)
{

 unsigned int VAR_10 = VAR_6;
 unsigned int VAR_11;
 unsigned int VAR_12 = 0;
 unsigned int VAR_13 = 0;


 if (VAR_7->txq_dynamic_cksum_toggle_supported)
  VAR_10++;


 if (FUNC_1(VAR_7->enp)->enc_hw_tx_insert_vlan_enabled)
  VAR_10++;

 if (VAR_8 == VAR_5) {






  VAR_11 = VAR_4 * 2 - 1;



  if (VAR_9 & VAR_2)
   VAR_12 =
       VAR_11 + VAR_4;





  if (VAR_9 & VAR_3) {
   VAR_13 =
       FUNC_2(VAR_6,
        VAR_0 - 1) *
       (VAR_1 + 1) - 1;
  }

  VAR_10 += FUNC_0(VAR_11,
     FUNC_0(VAR_12, VAR_13));
 }

 return (VAR_10);
}
