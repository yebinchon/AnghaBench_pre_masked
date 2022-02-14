
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct pbio_softc {int dummy; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cdev*) ;
 struct pbio_softc* FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_1, int VAR_2, struct thread *VAR_3)
{
 struct pbio_softc *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1);
 VAR_4 = FUNC_1(VAR_5);
 if (VAR_4 == ((void*)0))
  return (VAR_0);




 return (0);
}
