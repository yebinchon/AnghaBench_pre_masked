
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct icee_softc {int dev; } ;
struct cdev {int dummy; } ;


 struct icee_softc* FUNC_0 (struct cdev*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_0, int VAR_1, int VAR_2, struct thread *VAR_3)
{
 struct icee_softc *VAR_4;

 VAR_4 = FUNC_0(VAR_0);
 FUNC_1(VAR_4->dev);
 return (0);
}
