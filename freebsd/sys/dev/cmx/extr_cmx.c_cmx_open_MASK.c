
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cmx_softc {int open; int dev; scalar_t__ dying; } ;
struct cdev {struct cmx_softc* si_drv1; } ;


 int FUNC_0 (struct cmx_softc*) ;
 int FUNC_1 (struct cmx_softc*) ;
 int FUNC_2 (int ,char*,int,int ,struct thread*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_3, int VAR_4, int VAR_5, struct thread *VAR_6)
{
 struct cmx_softc *VAR_7 = VAR_3->si_drv1;

 if (VAR_7 == ((void*)0) || VAR_7->dying)
  return VAR_1;

 FUNC_0(VAR_7);
 if (VAR_7->open) {
  FUNC_1(VAR_7);
  return VAR_0;
 }
 VAR_7->open = 1;
 FUNC_1(VAR_7);

 FUNC_2(VAR_7->dev, "open (flags=%b thread=%p)\n",
   VAR_4, VAR_2, VAR_6);
 return 0;
}
