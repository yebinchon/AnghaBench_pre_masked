
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct thread {int dummy; } ;
struct cmx_softc {int polling; int dev; int ch; int sel; scalar_t__ dying; } ;
struct cdev {struct cmx_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cmx_softc*) ;
 int FUNC_1 (struct cmx_softc*) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *,int ,int ,struct cmx_softc*) ;
 int FUNC_4 (struct cmx_softc*) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;
 int VAR_9 ;
 int FUNC_6 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_7(struct cdev *VAR_10, int VAR_11, struct thread *VAR_12)
{
 struct cmx_softc *VAR_13 = VAR_10->si_drv1;
 int VAR_14 = 0;
 uint8_t VAR_15 = 0;

 if (VAR_13 == ((void*)0) || VAR_13->dying)
  return VAR_2;

 VAR_15 = FUNC_4(VAR_13);
 FUNC_2(VAR_13->dev, "called (events=%b BSR=%b)\n",
   VAR_11, VAR_3, VAR_15, VAR_0);

 VAR_14 = VAR_11 & (VAR_5 | VAR_7);
 if (VAR_11 & (VAR_4 | VAR_6)) {
  if (FUNC_5(VAR_15, VAR_1, 1)) {
   VAR_14 |= VAR_11 & (VAR_4 | VAR_6);
  } else {
   FUNC_6(VAR_12, &VAR_13->sel);
   FUNC_0(VAR_13);
   if (!VAR_13->polling) {
    FUNC_2(VAR_13->dev, "enabling polling\n");
    VAR_13->polling = 1;
    FUNC_3(&VAR_13->ch, VAR_8,
      VAR_9, VAR_13);
   } else {
    FUNC_2(VAR_13->dev, "already polling\n");
   }
   FUNC_1(VAR_13);
  }
 }

 FUNC_2(VAR_13->dev, "success (revents=%b)\n", VAR_14, VAR_3);

 return VAR_14;
}
