
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bge_softc {scalar_t__ bge_asf_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bge_softc*,int ) ;
 int FUNC_1 (struct bge_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct bge_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct bge_softc *VAR_4)
{
 int VAR_5;

 if (VAR_4->bge_asf_mode) {
  FUNC_3(VAR_4, VAR_3, VAR_0);
  FUNC_1(VAR_4, VAR_2,
      FUNC_0(VAR_4, VAR_2) | VAR_1);

  for (VAR_5 = 0; VAR_5 < 100; VAR_5++ ) {
   if (!(FUNC_0(VAR_4, VAR_2) &
       VAR_1))
    break;
   FUNC_2(10);
  }
 }
}
