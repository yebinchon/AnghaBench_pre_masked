
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct sfxge_softc {int enp; struct sysctl_oid* evqs_stats_node; int dev; } ;
struct sfxge_evq {int index; struct sfxge_softc* sc; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,int ,int ,int ,int,struct sfxge_evq*,unsigned int,int ,char*,char*) ;
 int FUNC_2 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned int) ;
 int VAR_5 ;
 int FUNC_5 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_6(struct sfxge_evq *VAR_6)
{
 struct sfxge_softc *VAR_7 = VAR_6->sc;
 struct sysctl_ctx_list *VAR_8 = FUNC_3(VAR_7->dev);
 char VAR_9[16];
 struct sysctl_oid *VAR_10;
 unsigned int VAR_11;

 FUNC_5(VAR_9, sizeof(VAR_9), "%u", VAR_6->index);
 VAR_10 = FUNC_0(VAR_8,
      FUNC_2(VAR_7->evqs_stats_node),
      VAR_4, VAR_9, VAR_0, ((void*)0), "");
 if (VAR_10 == ((void*)0))
  return (VAR_2);

 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  FUNC_1(
   VAR_8, FUNC_2(VAR_10),
   VAR_4, FUNC_4(VAR_7->enp, VAR_11),
   VAR_1|VAR_0,
   VAR_6, VAR_11, VAR_5, "Q",
   "");
 }

 return (0);
}
