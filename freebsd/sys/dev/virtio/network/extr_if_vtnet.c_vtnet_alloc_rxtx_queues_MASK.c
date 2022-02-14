
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_txq {int dummy; } ;
struct vtnet_softc {int vtnet_max_vq_pairs; int * vtnet_txqs; int * vtnet_rxqs; } ;
struct vtnet_rxq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int,int ,int) ;
 int FUNC_1 (struct vtnet_softc*,int) ;
 int FUNC_2 (struct vtnet_softc*,int) ;
 int FUNC_3 (struct vtnet_softc*) ;

__attribute__((used)) static int
FUNC_4(struct vtnet_softc *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 VAR_6 = VAR_4->vtnet_max_vq_pairs;

 VAR_4->vtnet_rxqs = FUNC_0(sizeof(struct vtnet_rxq) * VAR_6, VAR_1,
     VAR_2 | VAR_3);
 VAR_4->vtnet_txqs = FUNC_0(sizeof(struct vtnet_txq) * VAR_6, VAR_1,
     VAR_2 | VAR_3);
 if (VAR_4->vtnet_rxqs == ((void*)0) || VAR_4->vtnet_txqs == ((void*)0))
  return (VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_7 = FUNC_1(VAR_4, VAR_5);
  if (VAR_7)
   return (VAR_7);
  VAR_7 = FUNC_2(VAR_4, VAR_5);
  if (VAR_7)
   return (VAR_7);
 }

 FUNC_3(VAR_4);

 return (0);
}
