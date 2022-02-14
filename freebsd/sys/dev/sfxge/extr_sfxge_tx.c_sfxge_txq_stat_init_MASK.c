
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct sfxge_txq {TYPE_1__* sc; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_5__ {scalar_t__ offset; int name; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,int ,int ,int ,int,unsigned long*,char*) ;
 int FUNC_2 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 unsigned int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static int
FUNC_5(struct sfxge_txq *VAR_5, struct sysctl_oid *VAR_6)
{
 struct sysctl_ctx_list *VAR_7 = FUNC_3(VAR_5->sc->dev);
 struct sysctl_oid *VAR_8;
 unsigned int VAR_9;

 VAR_8 = FUNC_0(VAR_7, FUNC_2(VAR_6), VAR_3,
        "stats", VAR_0, ((void*)0),
        "Tx queue statistics");
 if (VAR_8 == ((void*)0))
  return (VAR_2);

 for (VAR_9 = 0; VAR_9 < FUNC_4(VAR_4); VAR_9++) {
  FUNC_1(
      VAR_7, FUNC_2(VAR_8), VAR_3,
      VAR_4[VAR_9].name, VAR_0 | VAR_1,
      (unsigned long *)((caddr_t)VAR_5 + VAR_4[VAR_9].offset),
      "");
 }

 return (0);
}
