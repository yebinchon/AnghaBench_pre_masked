
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t jme_rx_cons; int jme_rx_ring_map; int jme_rx_ring_tag; } ;
struct TYPE_3__ {struct jme_desc* jme_rx_ring; } ;
struct jme_softc {TYPE_2__ jme_cdata; TYPE_1__ jme_rdata; } ;
struct jme_desc {int buflen; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct jme_softc*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct jme_softc *VAR_8, int VAR_9)
{
 struct jme_desc *VAR_10;
 int VAR_11, VAR_12, VAR_13;

 FUNC_2(VAR_8->jme_cdata.jme_rx_ring_tag,
     VAR_8->jme_cdata.jme_rx_ring_map,
     VAR_0 | VAR_1);

 for (VAR_12 = 0; VAR_9 > 0; VAR_12++) {
  VAR_10 = &VAR_8->jme_rdata.jme_rx_ring[VAR_8->jme_cdata.jme_rx_cons];
  if ((FUNC_5(VAR_10->flags) & VAR_5) == VAR_5)
   break;
  if ((FUNC_5(VAR_10->buflen) & VAR_6) == 0)
   break;
  VAR_11 = FUNC_1(FUNC_5(VAR_10->buflen));






  VAR_13 = FUNC_0(FUNC_5(VAR_10->buflen));
  if (VAR_11 != FUNC_3(VAR_13, VAR_7))
   break;
  VAR_12++;

  FUNC_4(VAR_8);
  VAR_9 -= VAR_11;
 }

 if (VAR_12 > 0)
  FUNC_2(VAR_8->jme_cdata.jme_rx_ring_tag,
      VAR_8->jme_cdata.jme_rx_ring_map,
      VAR_2 | VAR_3);

 return (VAR_9 > 0 ? 0 : VAR_4);
}
