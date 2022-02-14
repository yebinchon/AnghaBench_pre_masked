
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct sfxge_intr {int n_alloc; scalar_t__ state; } ;
struct sfxge_softc {int evq_count; int * evqs_stats_node; struct sysctl_oid* stats_node; int dev; int ev_moderation; struct sfxge_intr intr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int * FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int ,int *,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,int ,int ,char*,int,struct sfxge_softc*,int ,int ,char*,char*) ;
 int FUNC_3 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_4 (int ) ;
 struct sysctl_oid* FUNC_5 (int ) ;
 int FUNC_6 (struct sfxge_softc*,int) ;
 int FUNC_7 (struct sfxge_softc*,int) ;
 int FUNC_8 (struct sfxge_softc*) ;
 int VAR_7 ;

int
FUNC_9(struct sfxge_softc *VAR_8)
{
 struct sysctl_ctx_list *VAR_9 = FUNC_4(VAR_8->dev);
 struct sysctl_oid *VAR_10 = FUNC_5(VAR_8->dev);
 struct sfxge_intr *VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_11 = &VAR_8->intr;

 VAR_8->evq_count = VAR_11->n_alloc;

 FUNC_0(VAR_11->state == VAR_5,
     ("intr->state != SFXGE_INTR_INITIALIZED"));




 VAR_8->ev_moderation = VAR_6;
 FUNC_2(VAR_9, FUNC_3(VAR_10),
   VAR_4, "int_mod", VAR_2|VAR_1,
   VAR_8, 0, VAR_7, "IU",
   "sfxge interrupt moderation (us)");
 for (VAR_12 = 0; VAR_12 < VAR_8->evq_count; VAR_12++) {
  if ((VAR_13 = FUNC_7(VAR_8, VAR_12)) != 0)
   goto fail;
 }





 return (0);

fail:
 while (--VAR_12 >= 0)
  FUNC_6(VAR_8, VAR_12);




 VAR_8->evq_count = 0;
 return (VAR_13);
}
