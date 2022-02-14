
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edma_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct edma_softc*,int ) ;
 int FUNC_2 (struct edma_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct edma_softc *VAR_1, int VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_1(VAR_1, FUNC_0(VAR_2));
 VAR_3 |= VAR_0;
 FUNC_2(VAR_1, FUNC_0(VAR_2), VAR_3);

 return (0);
}
