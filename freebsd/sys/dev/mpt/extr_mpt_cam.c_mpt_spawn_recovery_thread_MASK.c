
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpt_softc {int unit; int recovery_thread; } ;


 int FUNC_0 (int ,struct mpt_softc*,int *,int ,int ,char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct mpt_softc *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1,
     &VAR_1->recovery_thread, 0,
                 0, "mpt_recovery%d", VAR_1->unit);
 return (VAR_2);
}
