
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct glxiic_softc {int timeout; int callout; } ;


 int FUNC_0 (struct glxiic_softc*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,int ,int ,struct glxiic_softc*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct glxiic_softc *VAR_2)
{

 FUNC_0(VAR_2);

 FUNC_1(&VAR_2->callout, VAR_0 * VAR_2->timeout, 0,
     VAR_1, VAR_2, 0);
}
