
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ccb {int dummy; } ccb ;
typedef int uint8_t ;
typedef int uint32_t ;
struct umass_softc {int dummy; } ;


 int FUNC_0 (struct umass_softc*,int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (union ccb*) ;

__attribute__((used)) static void
FUNC_2(struct umass_softc *VAR_1, union ccb *VAR_2, uint32_t VAR_3,
    uint8_t VAR_4)
{
 FUNC_0(VAR_1, VAR_0, "Test unit ready "
     "returned status %d\n", VAR_4);

 FUNC_1(VAR_2);
}
