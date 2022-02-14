
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct icee_softc {int dev; } ;
struct cdev {int dummy; } ;


 struct icee_softc* FUNC_0 (struct cdev*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{
 struct icee_softc *VAR_5;

 VAR_5 = FUNC_0(VAR_1);
 if (FUNC_2(VAR_5->dev) < VAR_0)
  FUNC_1(VAR_5->dev);

 return (0);
}
