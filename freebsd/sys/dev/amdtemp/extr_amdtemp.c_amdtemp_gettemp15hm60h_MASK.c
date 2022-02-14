
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdtemp_softc {int sc_offset; int sc_smn; } ;
typedef int int32_t ;
typedef int device_t ;
typedef int amdsensor_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ) ;
 struct amdtemp_softc* FUNC_3 (int ) ;

__attribute__((used)) static int32_t
FUNC_4(device_t VAR_1, amdsensor_t VAR_2)
{
 struct amdtemp_softc *VAR_3 = FUNC_3(VAR_1);
 uint32_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3->sc_smn, VAR_0, &VAR_4);
 FUNC_0(VAR_5 == 0, ("amdsmn_read"));
 return (FUNC_2(VAR_3->sc_offset, VAR_4));
}
