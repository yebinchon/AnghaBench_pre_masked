
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aml8726_iic_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct aml8726_iic_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct aml8726_iic_softc*) ;
 int FUNC_2 (struct aml8726_iic_softc*,int ) ;
 int FUNC_3 (struct aml8726_iic_softc*,int ,int) ;
 struct aml8726_iic_softc* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_3, int VAR_4)
{
 struct aml8726_iic_softc *VAR_5 = FUNC_4(VAR_3);

 FUNC_0(VAR_5);

 FUNC_3(VAR_5, VAR_0, ((FUNC_2(VAR_5, VAR_0) &
     ~VAR_2) | (VAR_4 ? VAR_2 : 0) |
     VAR_1));

 FUNC_1(VAR_5);
}
