
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpsw_softc {int mbuf_dtag; } ;
struct cpsw_slot {int * mbuf; int * dmamap; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct cpsw_softc *VAR_0, struct cpsw_slot *VAR_1)
{
 int VAR_2;

 if (VAR_1->dmamap) {
  if (VAR_1->mbuf)
   FUNC_2(VAR_0->mbuf_dtag, VAR_1->dmamap);
  VAR_2 = FUNC_1(VAR_0->mbuf_dtag, VAR_1->dmamap);
  FUNC_0(VAR_2 == 0, ("Mapping still active"));
  VAR_1->dmamap = ((void*)0);
 }
 if (VAR_1->mbuf) {
  FUNC_3(VAR_1->mbuf);
  VAR_1->mbuf = ((void*)0);
 }
}
