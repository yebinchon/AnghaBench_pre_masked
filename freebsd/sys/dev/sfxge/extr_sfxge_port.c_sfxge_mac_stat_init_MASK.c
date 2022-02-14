
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct sfxge_softc {int enp; int stats_node; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char const*,int,struct sfxge_softc*,unsigned int,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_1 (int ) ;
 struct sysctl_ctx_list* FUNC_2 (int ) ;
 char* FUNC_3 (int ,unsigned int) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4(struct sfxge_softc *VAR_5)
{
 struct sysctl_ctx_list *VAR_6 = FUNC_2(VAR_5->dev);
 struct sysctl_oid_list *VAR_7;
 unsigned int VAR_8;
 const char *VAR_9;

 VAR_7 = FUNC_1(VAR_5->stats_node);


 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_9 = FUNC_3(VAR_5->enp, VAR_8);
  FUNC_0(
   VAR_6, VAR_7,
   VAR_3, VAR_9, VAR_1|VAR_0,
   VAR_5, VAR_8, VAR_4, "Q",
   "");
 }
}
