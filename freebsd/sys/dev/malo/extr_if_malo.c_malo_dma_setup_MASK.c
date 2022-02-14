
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malo_softc {int * malo_txq; } ;


 int VAR_0 ;
 int FUNC_0 (struct malo_softc*) ;
 int FUNC_1 (struct malo_softc*) ;
 int FUNC_2 (struct malo_softc*,int *) ;
 int FUNC_3 (struct malo_softc*,int *,int) ;

__attribute__((used)) static int
FUNC_4(struct malo_softc *VAR_1)
{
 int VAR_2, VAR_3;


 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 != 0)
  return VAR_2;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = FUNC_2(VAR_1, &VAR_1->malo_txq[VAR_3]);
  if (VAR_2 != 0) {
   FUNC_0(VAR_1);

   return VAR_2;
  }

  FUNC_3(VAR_1, &VAR_1->malo_txq[VAR_3], VAR_3);
 }

 return 0;
}
