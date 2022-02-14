
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rtwn_softc {int efuse_maplen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtwn_softc*) ;
 int FUNC_1 (struct rtwn_softc*) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct rtwn_softc*,int *,int ) ;
 int FUNC_5 (struct rtwn_softc*,int *) ;

int
FUNC_6(struct rtwn_softc *VAR_2)
{
 uint8_t *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_2->efuse_maplen, VAR_0, VAR_1);


 FUNC_0(VAR_2);
 VAR_4 = FUNC_4(VAR_2, VAR_3, VAR_2->efuse_maplen);
 FUNC_1(VAR_2);
 if (VAR_4 != 0)
  goto fail;


 FUNC_5(VAR_2, VAR_3);

fail:
 FUNC_2(VAR_3, VAR_0);

 return (VAR_4);
}
