
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct rtwn_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtwn_softc*,int *,int ) ;
 int FUNC_1 (struct rtwn_softc*) ;
 int FUNC_2 (struct rtwn_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct rtwn_softc *VAR_2, uint8_t *VAR_3, uint16_t VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5 != 0)
  goto fail;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);

fail:
 FUNC_2(VAR_2, VAR_0, VAR_1);

 return (VAR_5);
}
