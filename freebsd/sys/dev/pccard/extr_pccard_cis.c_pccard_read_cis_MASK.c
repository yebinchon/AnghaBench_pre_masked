
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cis1_major; int cis1_minor; scalar_t__ error; int pf_head; int product; int manufacturer; int ** cis1_info; } ;
struct pccard_softc {int dev; TYPE_1__ card; } ;
struct cis_state {TYPE_1__* card; int * pf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct cis_state*,int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (char*,int) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int ,struct cis_state*) ;

void
FUNC_5(struct pccard_softc *VAR_4)
{
 struct cis_state VAR_5;

 FUNC_1(&VAR_5, sizeof VAR_5);
 VAR_5.card = &VAR_4->card;
 VAR_5.card->error = 0;
 VAR_5.card->cis1_major = -1;
 VAR_5.card->cis1_minor = -1;
 VAR_5.card->cis1_info[0] = ((void*)0);
 VAR_5.card->cis1_info[1] = ((void*)0);
 VAR_5.card->cis1_info[2] = ((void*)0);
 VAR_5.card->cis1_info[3] = ((void*)0);
 VAR_5.card->manufacturer = VAR_1;
 VAR_5.card->product = VAR_0;
 FUNC_0(&VAR_5.card->pf_head);
 VAR_5.pf = ((void*)0);
 FUNC_3("pccard", VAR_2 / 10);
 if (FUNC_4(FUNC_2(VAR_4->dev), VAR_4->dev,
     VAR_3, &VAR_5) == -1)
  VAR_5.card->error++;
}
