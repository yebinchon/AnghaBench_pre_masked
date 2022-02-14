
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct run_tx_data {struct run_softc* sc; } ;
struct run_softc {int dummy; } ;
struct run_endpoint_queue {size_t tx_nfree; int tx_fh; struct run_tx_data* tx_data; int tx_qh; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct run_tx_data*,int ) ;
 int FUNC_2 (struct run_endpoint_queue*,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct run_softc *VAR_2, struct run_endpoint_queue *VAR_3)
{
 struct run_tx_data *VAR_4;

 FUNC_2(VAR_3, 0, sizeof(*VAR_3));

 FUNC_0(&VAR_3->tx_qh);
 FUNC_0(&VAR_3->tx_fh);

 for (VAR_4 = &VAR_3->tx_data[0];
     VAR_4 < &VAR_3->tx_data[VAR_0]; VAR_4++) {
  VAR_4->sc = VAR_2;
  FUNC_1(&VAR_3->tx_fh, VAR_4, VAR_1);
 }
 VAR_3->tx_nfree = VAR_0;
}
