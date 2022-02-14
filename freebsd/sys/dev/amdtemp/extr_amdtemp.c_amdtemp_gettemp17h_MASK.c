
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
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ,int*) ;
 struct amdtemp_softc* FUNC_2 (int ) ;

__attribute__((used)) static int32_t
FUNC_3(device_t VAR_4, amdsensor_t VAR_5)
{
 struct amdtemp_softc *VAR_6 = FUNC_2(VAR_4);
 uint32_t VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_6->sc_smn, VAR_0, &VAR_8);
 FUNC_0(VAR_9 == 0, ("amdsmn_read"));

 VAR_7 = ((VAR_8 >> 21) & 0x7ff) * 5 / 4;
 if ((VAR_8 & VAR_1) != 0)
  VAR_7 -= VAR_2;
 VAR_7 += VAR_3 + VAR_6->sc_offset * 10;

 return (VAR_7);
}
