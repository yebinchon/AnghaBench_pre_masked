
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx6_anatop_softc {int cpu_init_done; int cpu_curmv; int cpu_curmhz; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int const VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct imx6_anatop_softc*) ;
 struct imx6_anatop_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (struct imx6_anatop_softc*) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_4)
{
 struct imx6_anatop_softc *VAR_5;
 const int VAR_6 = VAR_0 + VAR_1;







 VAR_5 = FUNC_2(VAR_4);
 if (!VAR_5->cpu_init_done && VAR_3 >= VAR_6) {
  VAR_5->cpu_init_done = 1;
  FUNC_1(VAR_5);
  FUNC_4(VAR_5);
  if (VAR_2) {
   FUNC_3(VAR_5->dev, "CPU %uMHz @ %umV\n",
       VAR_5->cpu_curmhz, VAR_5->cpu_curmv);
  }
 }
 FUNC_0(VAR_4);
}
