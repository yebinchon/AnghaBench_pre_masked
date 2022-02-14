
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fw_releasenum; int regioncode; int hwversion; } ;
struct malo_softc {int malo_dev; TYPE_1__ malo_hwspecs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__,...) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_1(struct malo_softc *VAR_5)
{

 FUNC_0(VAR_5->malo_dev,
  "versions [hw %d fw %d.%d.%d.%d] (regioncode %d)\n",
  VAR_5->malo_hwspecs.hwversion,
  (VAR_5->malo_hwspecs.fw_releasenum >> 24) & 0xff,
  (VAR_5->malo_hwspecs.fw_releasenum >> 16) & 0xff,
  (VAR_5->malo_hwspecs.fw_releasenum >> 8) & 0xff,
  (VAR_5->malo_hwspecs.fw_releasenum >> 0) & 0xff,
  VAR_5->malo_hwspecs.regioncode);

 if (VAR_2 || VAR_3 != VAR_0)
  FUNC_0(VAR_5->malo_dev,
      "using %u rx buffers\n", VAR_3);
 if (VAR_2 || VAR_4 != VAR_1)
  FUNC_0(VAR_5->malo_dev,
      "using %u tx buffers\n", VAR_4);
}
