
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpt_softc {int shutdwn_raid; int * raid_thread; int raid_volumes; } ;


 int VAR_0 ;
 int FUNC_0 (struct mpt_softc*,int **,int ,char*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct mpt_softc *VAR_1)
{

 if (VAR_1->raid_thread == ((void*)0)) {
  return;
 }
 VAR_1->shutdwn_raid = 1;
 FUNC_1(&VAR_1->raid_volumes);




 FUNC_0(VAR_1, &VAR_1->raid_thread, VAR_0, "thtrm", 0);
}
