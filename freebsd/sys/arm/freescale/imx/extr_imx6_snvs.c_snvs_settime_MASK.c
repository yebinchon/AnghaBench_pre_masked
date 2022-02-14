
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timespec {int dummy; } ;
struct snvs_softc {int dev; } ;
typedef int sbintime_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snvs_softc*,int ,int ) ;
 int FUNC_1 (int ,int ,struct timespec*) ;
 struct snvs_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct snvs_softc*,int) ;
 int FUNC_4 (struct timespec) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4, struct timespec *VAR_5)
{
 struct snvs_softc *VAR_6;
 sbintime_t VAR_7;

 VAR_6 = FUNC_2(VAR_4);







 VAR_7 = FUNC_4(*VAR_5);
 VAR_7 += 2 << VAR_1;
 FUNC_3(VAR_6, 0);
 FUNC_0(VAR_6, VAR_3, (uint32_t)(VAR_7 >> (VAR_1 + 32)));
 FUNC_0(VAR_6, VAR_2, (uint32_t)(VAR_7 >> (VAR_1)));
 FUNC_3(VAR_6, 1);

 FUNC_1(VAR_6->dev, VAR_0, VAR_5);

 return (0);
}
