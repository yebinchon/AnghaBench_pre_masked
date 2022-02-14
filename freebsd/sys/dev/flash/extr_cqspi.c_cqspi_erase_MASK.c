
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cqspi_softc {int dummy; } ;
typedef int off_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cqspi_softc*,int ,int ,int ) ;
 int FUNC_1 (struct cqspi_softc*,int ,int ,int) ;
 int FUNC_2 (struct cqspi_softc*) ;
 int FUNC_3 (struct cqspi_softc*) ;
 struct cqspi_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2, device_t VAR_3, off_t VAR_4)
{
 struct cqspi_softc *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(VAR_2);

 FUNC_2(VAR_5);
 FUNC_3(VAR_5);
 VAR_6 = FUNC_0(VAR_5, VAR_1, 0, 0);

 FUNC_2(VAR_5);
 FUNC_3(VAR_5);
 VAR_6 = FUNC_1(VAR_5, VAR_0, VAR_4, 4);

 FUNC_2(VAR_5);

 return (0);
}
