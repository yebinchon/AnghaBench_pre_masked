
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bge_softc {int bge_ifp; } ;
typedef int if_t ;


 int FUNC_0 (struct bge_softc*,int ,int ) ;
 int FUNC_1 (struct bge_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct bge_softc*,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct bge_softc *VAR_3)
{
 if_t VAR_4;

 FUNC_1(VAR_3);

 VAR_4 = VAR_3->bge_ifp;


 if (FUNC_3(VAR_4) & VAR_2)
  FUNC_2(VAR_3, VAR_1, VAR_0);
 else
  FUNC_0(VAR_3, VAR_1, VAR_0);
}
