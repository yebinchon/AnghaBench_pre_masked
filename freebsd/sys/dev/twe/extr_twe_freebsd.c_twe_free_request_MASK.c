
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twe_softc {int twe_buffer_dmat; } ;
struct twe_request {int tr_dmamap; struct twe_softc* tr_sc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct twe_request*,int ) ;

void
FUNC_3(struct twe_request *VAR_1)
{
    struct twe_softc *VAR_2 = VAR_1->tr_sc;

    FUNC_1(4);

    FUNC_0(VAR_2->twe_buffer_dmat, VAR_1->tr_dmamap);
    FUNC_2(VAR_1, VAR_0);
}
