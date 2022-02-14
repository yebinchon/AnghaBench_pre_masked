
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int dev; } ;
struct fwohci_softc {TYPE_1__ fc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fwohci_softc*,int ) ;
 int FUNC_1 (struct fwohci_softc*,int ,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static uint32_t
FUNC_3(struct fwohci_softc *VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 if (VAR_3 == 0xffffffff) {
  FUNC_2(VAR_2->fc.dev,
   "device physically ejected?\n");
  return(VAR_3);
 }
 if (VAR_3)
  FUNC_1(VAR_2, VAR_1, VAR_3);
 return(VAR_3);
}
