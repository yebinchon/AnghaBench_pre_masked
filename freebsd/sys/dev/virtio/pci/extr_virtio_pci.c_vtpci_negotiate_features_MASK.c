
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vtpci_softc {int vtpci_features; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct vtpci_softc* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct vtpci_softc*,char*,int) ;
 int FUNC_3 (struct vtpci_softc*,int ) ;
 int FUNC_4 (struct vtpci_softc*,int ,int) ;

__attribute__((used)) static uint64_t
FUNC_5(device_t VAR_2, uint64_t VAR_3)
{
 struct vtpci_softc *VAR_4;
 uint64_t VAR_5, VAR_6;

 VAR_4 = FUNC_0(VAR_2);

 VAR_5 = FUNC_3(VAR_4, VAR_1);
 FUNC_2(VAR_4, "host", VAR_5);





 VAR_6 = VAR_5 & VAR_3;
 VAR_6 = FUNC_1(VAR_6);
 VAR_4->vtpci_features = VAR_6;

 FUNC_2(VAR_4, "negotiated", VAR_6);
 FUNC_4(VAR_4, VAR_0, VAR_6);

 return (VAR_6);
}
