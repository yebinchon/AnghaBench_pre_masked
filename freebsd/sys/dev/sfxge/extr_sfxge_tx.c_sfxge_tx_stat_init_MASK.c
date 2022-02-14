
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct sfxge_softc {int stats_node; int dev; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,int ,int,struct sfxge_softc*,unsigned int,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_1 (int ) ;
 struct sysctl_ctx_list* FUNC_2 (int ) ;
 unsigned int FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void
FUNC_4(struct sfxge_softc *VAR_5)
{
 struct sysctl_ctx_list *VAR_6 = FUNC_2(VAR_5->dev);
 struct sysctl_oid_list *VAR_7;
 unsigned int VAR_8;

 VAR_7 = FUNC_1(VAR_5->stats_node);

 for (VAR_8 = 0; VAR_8 < FUNC_3(VAR_4); VAR_8++) {
  FUNC_0(
   VAR_6, VAR_7,
   VAR_2, VAR_4[VAR_8].name,
   VAR_1|VAR_0,
   VAR_5, VAR_8, VAR_3, "LU",
   "");
 }
}
