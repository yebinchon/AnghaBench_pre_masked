
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt2560_tx_desc {int flags; int eiv; } ;
struct TYPE_2__ {int physaddr; int next_encrypt; int cur_encrypt; int desc_map; int desc_dmat; struct rt2560_tx_desc* desc; } ;
struct rt2560_softc {TYPE_1__ txq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rt2560_softc*,int,char*,size_t) ;
 int FUNC_1 (struct rt2560_softc*,int ) ;
 int FUNC_2 (struct rt2560_softc*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int,int) ;

__attribute__((used)) static void
FUNC_8(struct rt2560_softc *VAR_12)
{
 struct rt2560_tx_desc *VAR_13;
 int VAR_14;


 VAR_14 = FUNC_1(VAR_12, VAR_3) - VAR_12->txq.physaddr;
 VAR_14 /= VAR_9;

 FUNC_4(VAR_12->txq.desc_dmat, VAR_12->txq.desc_map,
     VAR_0);

 while (VAR_12->txq.next_encrypt != VAR_14) {
  if (VAR_12->txq.next_encrypt == VAR_12->txq.cur_encrypt) {
   FUNC_7("hw encrypt %d, cur_encrypt %d\n", VAR_14,
       VAR_12->txq.cur_encrypt);
   break;
  }

  VAR_13 = &VAR_12->txq.desc[VAR_12->txq.next_encrypt];

  if ((FUNC_6(VAR_13->flags) & VAR_5) ||
      (FUNC_6(VAR_13->flags) & VAR_6))
   break;


  if ((FUNC_6(VAR_13->flags) & VAR_7) ==
      VAR_8)
   VAR_13->eiv = FUNC_3(VAR_13->eiv);


  VAR_13->flags |= FUNC_5(VAR_11);
  VAR_13->flags |= FUNC_5(VAR_5);

  FUNC_0(VAR_12, 15, "encryption done idx=%u\n",
      VAR_12->txq.next_encrypt);

  VAR_12->txq.next_encrypt =
      (VAR_12->txq.next_encrypt + 1) % VAR_10;
 }

 FUNC_4(VAR_12->txq.desc_dmat, VAR_12->txq.desc_map,
     VAR_1);


 FUNC_2(VAR_12, VAR_4, VAR_2);
}
