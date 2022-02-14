
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_data {int flags; scalar_t__ len; } ;
struct mmc_command {int error; TYPE_1__* mrq; struct mmc_data* data; } ;
struct aml8726_mmc_softc {int dmamap; int dmatag; struct mmc_command* cmd; int ch; } ;
struct TYPE_2__ {int (* done ) (TYPE_1__*) ;struct mmc_command* stop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aml8726_mmc_softc*) ;
 int FUNC_1 (struct aml8726_mmc_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct aml8726_mmc_softc*,int ) ;
 int FUNC_3 (struct aml8726_mmc_softc*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct aml8726_mmc_softc*,struct mmc_command*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_9(struct aml8726_mmc_softc *VAR_7, int VAR_8)
{
 int VAR_9;
 struct mmc_command *VAR_10;
 struct mmc_command *VAR_11;
 struct mmc_data *VAR_12;

 FUNC_0(VAR_7);


 FUNC_3(VAR_7, VAR_1, VAR_0);
 FUNC_2(VAR_7, VAR_1);


 FUNC_7(&VAR_7->ch);

 VAR_10 = VAR_7->cmd;
 VAR_7->cmd = ((void*)0);

 VAR_10->error = VAR_8;

 VAR_12 = VAR_10->data;

 if (VAR_12 && VAR_12->len &&
     (VAR_12->flags & (VAR_4 | VAR_5)) != 0) {
  if ((VAR_12->flags & VAR_4) != 0)
   FUNC_5(VAR_7->dmatag, VAR_7->dmamap,
       VAR_2);
  else
   FUNC_5(VAR_7->dmatag, VAR_7->dmamap,
       VAR_3);
  FUNC_6(VAR_7->dmatag, VAR_7->dmamap);
 }







 VAR_11 = (VAR_10->mrq->stop != VAR_10) ? VAR_10->mrq->stop : ((void*)0);

 if (VAR_11 != ((void*)0)) {
  VAR_9 = FUNC_4(VAR_7, VAR_11);
  if (VAR_9 == VAR_6) {
   FUNC_1(VAR_7);
   return;
  }
  VAR_11->error = VAR_9;
 }

 FUNC_1(VAR_7);


 if (VAR_10->mrq)
  VAR_10->mrq->done(VAR_10->mrq);
}
