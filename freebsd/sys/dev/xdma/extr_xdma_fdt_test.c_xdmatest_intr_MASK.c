
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdmatest_softc {int done; int mtx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct xdmatest_softc*) ;

__attribute__((used)) static int
FUNC_3(void *VAR_0)
{
 struct xdmatest_softc *VAR_1;

 VAR_1 = VAR_0;

 VAR_1->done = 1;

 FUNC_0(&VAR_1->mtx);
 FUNC_2(VAR_1);
 FUNC_1(&VAR_1->mtx);

 return (0);
}
