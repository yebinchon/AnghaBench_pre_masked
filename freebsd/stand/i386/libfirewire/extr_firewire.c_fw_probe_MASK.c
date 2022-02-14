
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct fwohci_softc {int bus_id; int base_addr; scalar_t__ handle; int locator; int devid; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fwohci_softc*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,int,int *) ;
 int FUNC_3 (int ,int,int ,int *) ;
 int FUNC_4 (int ,int,int ,int) ;

__attribute__((used)) static void
FUNC_5(int VAR_5, struct fwohci_softc *VAR_6)
{
 int VAR_7;

 VAR_6->state = VAR_3;
 VAR_7 = FUNC_2(
  0x0c0010 ,
  VAR_5 ,
  &VAR_6->locator);

 if (VAR_7 != 0) {
  VAR_6->state = VAR_2;
  return;
 }

 FUNC_4(VAR_6->locator,
     0x4 ,
     VAR_0,
     0x6 );

 FUNC_3(VAR_6->locator, 0x00 , VAR_1,
  &VAR_6->devid);
 FUNC_3(VAR_6->locator, 0x10 , VAR_1,
  &VAR_6->base_addr);

        VAR_6->handle = (uint32_t)FUNC_1(VAR_6->base_addr);
 VAR_6->bus_id = FUNC_0(VAR_6, VAR_4);

 return;
}
