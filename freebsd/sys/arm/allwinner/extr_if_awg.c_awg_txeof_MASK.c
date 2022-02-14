
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct emac_desc {int size; int status; } ;
struct TYPE_2__ {int next; scalar_t__ queued; struct emac_desc* desc_ring; int desc_map; int desc_tag; } ;
struct awg_softc {TYPE_1__ tx; int ifp; } ;
typedef int if_t ;


 int FUNC_0 (struct awg_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int FUNC_2 (struct awg_softc*,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct awg_softc *VAR_9)
{
 struct emac_desc *VAR_10;
 uint32_t VAR_11, VAR_12;
 if_t VAR_13;
 int VAR_14, VAR_15;

 FUNC_0(VAR_9);

 FUNC_3(VAR_9->tx.desc_tag, VAR_9->tx.desc_map,
     VAR_0 | VAR_1);

 VAR_13 = VAR_9->ifp;

 VAR_15 = 0;
 for (VAR_14 = VAR_9->tx.next; VAR_9->tx.queued > 0; VAR_14 = FUNC_1(VAR_14)) {
  VAR_10 = &VAR_9->tx.desc_ring[VAR_14];
  VAR_11 = FUNC_6(VAR_10->status);
  if ((VAR_11 & VAR_5) != 0)
   break;
  VAR_12 = FUNC_6(VAR_10->size);
  if (VAR_12 & VAR_7) {
   if ((VAR_11 & (VAR_6 | VAR_8)) != 0)
    FUNC_4(VAR_13, VAR_2, 1);
   else
    FUNC_4(VAR_13, VAR_3, 1);
  }
  VAR_15++;
  FUNC_2(VAR_9, VAR_14);
 }

 if (VAR_15 > 0) {
  VAR_9->tx.next = VAR_14;
  FUNC_5(VAR_13, 0, VAR_4);
 }
}
