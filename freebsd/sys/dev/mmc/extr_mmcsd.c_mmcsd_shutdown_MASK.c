
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmcsd_softc {int dummy; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 struct mmcsd_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct mmcsd_softc*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct mmcsd_softc *VAR_2 = FUNC_0(VAR_1);

 if (FUNC_2(VAR_2) != VAR_0)
  FUNC_1(VAR_1, "failed to flush cache\n");
 return (0);
}
