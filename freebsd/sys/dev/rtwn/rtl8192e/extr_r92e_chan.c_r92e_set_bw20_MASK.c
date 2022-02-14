
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rtwn_softc {int nrxchains; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct rtwn_softc*,int ,int,int ) ;
 int FUNC_1 (struct rtwn_softc*,int,int ,int ,int) ;
 int FUNC_2 (struct rtwn_softc*,int ,int,int ) ;
 int FUNC_3 (struct rtwn_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct rtwn_softc *VAR_9, uint8_t VAR_10)
{
 int VAR_11;

 FUNC_2(VAR_9, VAR_8, 0x180, 0);
 FUNC_3(VAR_9, VAR_0, VAR_1);

 FUNC_0(VAR_9, VAR_3, VAR_6, 0);
 FUNC_0(VAR_9, VAR_4, VAR_6, 0);


 for (VAR_11 = 0; VAR_11 < VAR_9->nrxchains; VAR_11++)
  FUNC_1(VAR_9, VAR_11, VAR_7,
      VAR_2, 0xc00);

 FUNC_0(VAR_9, VAR_5, 0xc0000000, 0);
}
