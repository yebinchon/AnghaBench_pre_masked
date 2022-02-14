
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nct_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct nct_softc*) ;
 int FUNC_1 (struct nct_softc*) ;
 int FUNC_2 (struct nct_softc*) ;
 int FUNC_3 (int ) ;
 struct nct_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct nct_softc*,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1, uint32_t VAR_2, uint32_t *VAR_3)
{
 struct nct_softc *VAR_4;

 if (!FUNC_3(VAR_2))
  return (VAR_0);

 VAR_4 = FUNC_4(VAR_1);
 FUNC_0(VAR_4);
 FUNC_1(VAR_4);
 *VAR_3 = FUNC_5(VAR_4, VAR_2);
 FUNC_2(VAR_4);

 return (0);
}
