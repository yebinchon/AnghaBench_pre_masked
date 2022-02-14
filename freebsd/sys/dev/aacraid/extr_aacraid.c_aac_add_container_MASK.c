
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct aac_softc {int aac_container_tqh; } ;
struct aac_mntobj {int dummy; } ;
struct aac_mntinforesp {scalar_t__ Status; TYPE_1__* MntTable; } ;
struct aac_container {int co_found; int co_uid; int co_mntobj; } ;
struct TYPE_2__ {scalar_t__ VolType; } ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,struct aac_container*,int ) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 int VAR_6 ;
 int FUNC_2 (struct aac_softc*,char*,char*) ;
 scalar_t__ FUNC_3 (int,int ,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(struct aac_softc *VAR_7, struct aac_mntinforesp *VAR_8, int VAR_9,
    u_int32_t VAR_10)
{
 struct aac_container *VAR_11;

 FUNC_2(VAR_7, VAR_1, "");





 if ((VAR_8->Status == VAR_5) && (VAR_8->MntTable[0].VolType != VAR_0)) {
  VAR_11 = (struct aac_container *)FUNC_3(sizeof *VAR_11, VAR_2,
         VAR_3 | VAR_4);
  if (VAR_11 == ((void*)0)) {
   FUNC_4("Out of memory?!");
  }

  VAR_11->co_found = VAR_9;
  FUNC_1(&VAR_8->MntTable[0], &VAR_11->co_mntobj,
        sizeof(struct aac_mntobj));
  VAR_11->co_uid = VAR_10;
  FUNC_0(&VAR_7->aac_container_tqh, VAR_11, VAR_6);
 }
}
