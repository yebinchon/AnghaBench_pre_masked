
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nct_softc {int dev; int * iores; } ;
typedef int reg_t ;


 int FUNC_0 (struct nct_softc*,int ,int) ;
 int FUNC_1 (struct nct_softc*,int,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static uint8_t
FUNC_3(struct nct_softc *VAR_0, reg_t VAR_1, int VAR_2)
{
 uint8_t VAR_3;
 uint8_t VAR_4;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_0->iores != ((void*)0))
  VAR_4 = FUNC_1(VAR_0, VAR_2, VAR_3);
 else
  VAR_4 = FUNC_2(VAR_0->dev, VAR_3);

 return (VAR_4);
}
