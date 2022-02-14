
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twe_softc {int twe_buffer_dmat; } ;
struct twe_request {int tr_tag; int tr_dmamap; struct twe_softc* tr_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 struct twe_request* FUNC_1 (int,int ,int) ;
 int FUNC_2 (struct twe_request*) ;
 int FUNC_3 (struct twe_softc*,char*,int) ;

struct twe_request *
FUNC_4(struct twe_softc *VAR_3, int VAR_4)
{
    struct twe_request *VAR_5;

    VAR_5 = FUNC_1(sizeof(struct twe_request), VAR_2, VAR_0 | VAR_1);
    VAR_5->tr_sc = VAR_3;
    VAR_5->tr_tag = VAR_4;
    if (FUNC_0(VAR_3->twe_buffer_dmat, 0, &VAR_5->tr_dmamap)) {
 FUNC_2(VAR_5);
 FUNC_3(VAR_3, "unable to allocate dmamap for tag %d\n", VAR_4);
 return(((void*)0));
    }
    return(VAR_5);
}
