
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct muge_softc {int ** sc_pfilter_table; int sc_mchash_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct muge_softc*,int ,int ,int ,int ) ;
 int FUNC_3 (struct muge_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct muge_softc *VAR_4)
{
 int VAR_5, VAR_6;
 FUNC_2(VAR_4, VAR_0,
     VAR_2, VAR_1,
     VAR_4->sc_mchash_table);

 for (VAR_5 = 1; VAR_5 < VAR_3; VAR_5++) {
  VAR_6 = FUNC_3(VAR_4, FUNC_0(VAR_5), 0);
  VAR_6 = FUNC_3(VAR_4, FUNC_1(VAR_5),
      VAR_4->sc_pfilter_table[VAR_5][1]);
  VAR_6 = FUNC_3(VAR_4, FUNC_0(VAR_5),
      VAR_4->sc_pfilter_table[VAR_5][0]);
 }
}
