
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_softc {int dummy; } ;
struct mmc_request {int flags; scalar_t__ done_data; } ;


 int FUNC_0 (struct mmc_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct mmc_softc*) ;
 int FUNC_2 (struct mmc_request*) ;

__attribute__((used)) static void
FUNC_3(struct mmc_request *VAR_1)
{
 struct mmc_softc *VAR_2;

 VAR_2 = (struct mmc_softc *)VAR_1->done_data;
 FUNC_0(VAR_2);
 VAR_1->flags |= VAR_0;
 FUNC_1(VAR_2);
 FUNC_2(VAR_1);
}
