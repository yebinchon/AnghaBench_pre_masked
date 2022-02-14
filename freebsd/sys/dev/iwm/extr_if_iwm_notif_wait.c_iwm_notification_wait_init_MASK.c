
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_softc {int dummy; } ;
struct iwm_notif_wait_data {struct iwm_softc* sc; int list; int lk_buf; } ;


 int FUNC_0 (struct iwm_notif_wait_data*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 struct iwm_notif_wait_data* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int ,int,char*) ;

struct iwm_notif_wait_data *
FUNC_4(struct iwm_softc *VAR_3)
{
 struct iwm_notif_wait_data *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0, VAR_1 | VAR_2);
 if (VAR_4 != ((void*)0)) {
  FUNC_3(VAR_4->lk_buf, 32, "iwm wait_notif");
  FUNC_0(VAR_4, VAR_4->lk_buf);
  FUNC_1(&VAR_4->list);
  VAR_4->sc = VAR_3;
 }

 return VAR_4;
}
