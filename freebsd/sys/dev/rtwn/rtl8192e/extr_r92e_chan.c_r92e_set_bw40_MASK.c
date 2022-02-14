
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct rtwn_softc*,int,int,int) ;
 int FUNC_1 (struct rtwn_softc*,int,int ,int ,int) ;
 int FUNC_2 (struct rtwn_softc*,int ,int,int) ;
 int FUNC_3 (struct rtwn_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct rtwn_softc *VAR_14, uint8_t VAR_15, int VAR_16)
{
 int VAR_17;

 FUNC_2(VAR_14, VAR_13, 0x100, 0x80);
 FUNC_3(VAR_14, VAR_0,
     VAR_16 ? VAR_1 : VAR_2);

 FUNC_0(VAR_14, VAR_8, 0, VAR_11);
 FUNC_0(VAR_14, VAR_9, 0, VAR_11);


 for (VAR_17 = 0; VAR_17 < VAR_14->nrxchains; VAR_17++)
  FUNC_1(VAR_14, VAR_17, VAR_12,
      VAR_3, 0x400);


 FUNC_0(VAR_14, VAR_4,
     VAR_5, (VAR_16 ? 0 : 1) << 4);

 FUNC_0(VAR_14, VAR_10, 0x0c00, (VAR_16 ? 1 : 2) << 10);

 FUNC_0(VAR_14, VAR_6,
     VAR_7, 0);

 FUNC_0(VAR_14, 0x818, 0x0c000000, (VAR_16 ? 2 : 1) << 26);
}
