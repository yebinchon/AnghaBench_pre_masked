
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nct_softc {int * iores; int iorid; } ;
typedef int device_t ;


 int FUNC_0 (struct nct_softc*) ;
 int FUNC_1 (struct nct_softc*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ,int *) ;
 struct nct_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct nct_softc *VAR_2;

 VAR_2 = FUNC_3(VAR_1);
 FUNC_4(VAR_1);

 if (VAR_2->iores != ((void*)0))
  FUNC_2(VAR_1, VAR_0, VAR_2->iorid, VAR_2->iores);
 FUNC_0(VAR_2);
 FUNC_1(VAR_2);

 return (0);
}
