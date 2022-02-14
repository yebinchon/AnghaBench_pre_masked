
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cmx_softc {int dev; scalar_t__ open; int sel; int ch; scalar_t__ polling; scalar_t__ dying; } ;
struct cdev {struct cmx_softc* si_drv1; } ;


 int FUNC_0 (struct cmx_softc*) ;
 int FUNC_1 (struct cmx_softc*) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_4, int VAR_5, int VAR_6, struct thread *VAR_7)
{
 struct cmx_softc *VAR_8 = VAR_4->si_drv1;

 if (VAR_8 == ((void*)0) || VAR_8->dying)
  return VAR_1;

 FUNC_0(VAR_8);
 if (!VAR_8->open) {
  FUNC_1(VAR_8);
  return VAR_0;
 }
 if (VAR_8->polling) {
  FUNC_2(VAR_8->dev, "disabling polling\n");
  FUNC_4(&VAR_8->ch);
  VAR_8->polling = 0;
  FUNC_1(VAR_8);
  FUNC_3(&VAR_8->ch);
  FUNC_5(&VAR_8->sel, VAR_3);
  FUNC_0(VAR_8);
 }
 VAR_8->open = 0;
 FUNC_1(VAR_8);

 FUNC_2(VAR_8->dev, "close (flags=%b thread=%p)\n",
   VAR_5, VAR_2, VAR_7);
 return 0;
}
