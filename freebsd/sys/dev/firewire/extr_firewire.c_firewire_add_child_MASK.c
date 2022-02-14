
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct firewire_softc {int fc; } ;
typedef scalar_t__ device_t ;


 scalar_t__ FUNC_0 (scalar_t__,char const*,int) ;
 struct firewire_softc* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static device_t
FUNC_4(device_t VAR_0, u_int VAR_1, const char *VAR_2, int VAR_3)
{
 device_t VAR_4;
 struct firewire_softc *VAR_5;

 VAR_5 = FUNC_1(VAR_0);
 VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_3(VAR_4, VAR_5->fc);
  FUNC_2(VAR_4);
 }

 return VAR_4;
}
