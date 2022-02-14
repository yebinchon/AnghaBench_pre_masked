
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uath_tx_desc {scalar_t__ msgid; void* flags; void* connid; void* txqid; void* type; void* msglen; } ;
struct uath_softc {int sc_debug; int sc_tx_timer; int * sc_xfer; int sc_tx_pending; int sc_msgid; } ;
struct uath_data {int buflen; scalar_t__ buf; int * ni; int * m; } ;
struct uath_chunk {int length; int flags; scalar_t__ seqnum; } ;


 int FUNC_0 (struct uath_softc*,int ,char*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct uath_data*,int ) ;
 int FUNC_2 (struct uath_softc*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct uath_softc*,int ) ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (struct uath_tx_desc*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (scalar_t__,int,char) ;
 struct uath_data* FUNC_8 (struct uath_softc*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(struct uath_softc *VAR_9)
{
 struct uath_data *VAR_10;
 struct uath_chunk *VAR_11;
 struct uath_tx_desc *VAR_12;

 FUNC_2(VAR_9);

 VAR_10 = FUNC_8(VAR_9);
 if (VAR_10 == ((void*)0))
  return (VAR_0);
 VAR_10->buflen = sizeof(struct uath_chunk) + sizeof(struct uath_tx_desc);
 VAR_10->m = ((void*)0);
 VAR_10->ni = ((void*)0);
 VAR_11 = (struct uath_chunk *)VAR_10->buf;
 VAR_12 = (struct uath_tx_desc *)(VAR_11 + 1);


 VAR_11->seqnum = 0;
 VAR_11->flags = VAR_2;
 VAR_11->length = FUNC_4(sizeof (struct uath_tx_desc));

 FUNC_6(VAR_12, 0, sizeof(struct uath_tx_desc));
 VAR_12->msglen = FUNC_5(sizeof(struct uath_tx_desc));
 VAR_12->msgid = (VAR_9->sc_msgid++) + 1;
 VAR_12->type = FUNC_5(VAR_6);
 VAR_12->txqid = FUNC_5(0);
 VAR_12->connid = FUNC_5(0);
 VAR_12->flags = FUNC_5(0);
 FUNC_1(&VAR_9->sc_tx_pending, VAR_10, VAR_7);
 FUNC_3(VAR_9, VAR_8);
 VAR_9->sc_tx_timer = 5;
 FUNC_9(VAR_9->sc_xfer[VAR_1]);

 return (0);
}
