
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcd_conf {int channel; int smod; int dmod; int ssize; int dsize; int soff; int doff; int nmajor; int majorelink; int majorelinkch; int nbytes; int dlast_sga; int slast; int daddr; int saddr; int ih_user; int ih; } ;
struct edma_softc {int dummy; } ;
struct edma_channel {int ih_user; int ih; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct edma_softc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (struct edma_softc*,int ,int) ;
 int FUNC_13 (struct edma_softc*,int ,int ) ;
 int FUNC_14 (struct edma_softc*,int ,int) ;
 struct edma_channel* VAR_9 ;

__attribute__((used)) static int
FUNC_15(struct edma_softc *VAR_10, struct tcd_conf *VAR_11)
{
 struct edma_channel *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_13 = VAR_11->channel;

 VAR_12 = &VAR_9[VAR_13];
 VAR_12->ih = VAR_11->ih;
 VAR_12->ih_user = VAR_11->ih_user;

 FUNC_13(VAR_10, FUNC_8(VAR_13), VAR_11->saddr);
 FUNC_13(VAR_10, FUNC_4(VAR_13), VAR_11->daddr);

 VAR_14 = (VAR_11->smod << VAR_4);
 VAR_14 |= (VAR_11->dmod << VAR_2);
 VAR_14 |= (VAR_11->ssize << VAR_5);
 VAR_14 |= (VAR_11->dsize << VAR_3);
 FUNC_12(VAR_10, FUNC_0(VAR_13), VAR_14);

 FUNC_12(VAR_10, FUNC_10(VAR_13), VAR_11->soff);
 FUNC_12(VAR_10, FUNC_6(VAR_13), VAR_11->doff);
 FUNC_13(VAR_10, FUNC_9(VAR_13), VAR_11->slast);
 FUNC_13(VAR_10, FUNC_5(VAR_13), VAR_11->dlast_sga);
 FUNC_13(VAR_10, FUNC_7(VAR_13), VAR_11->nbytes);

 VAR_14 = VAR_11->nmajor;
 FUNC_12(VAR_10, FUNC_2(VAR_13), VAR_14);
 FUNC_12(VAR_10, FUNC_1(VAR_13), VAR_14);

 VAR_14 = (VAR_6);
 if(VAR_11->majorelink == 1) {
  VAR_14 |= VAR_7;
  VAR_14 |= (VAR_11->majorelinkch << VAR_8);
 }
 FUNC_12(VAR_10, FUNC_3(VAR_13), VAR_14);


 VAR_14 = FUNC_11(VAR_10, VAR_1);
 VAR_14 |= (0x1 << VAR_13);
 FUNC_14(VAR_10, VAR_1, VAR_14);


 VAR_14 = FUNC_11(VAR_10, VAR_0);
 VAR_14 |= (0x1 << VAR_13);
 FUNC_14(VAR_10, VAR_0, VAR_14);

 return (0);
}
