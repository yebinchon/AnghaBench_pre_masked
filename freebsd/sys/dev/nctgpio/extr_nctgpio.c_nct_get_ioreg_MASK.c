
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct nct_softc {int * iores; } ;
typedef scalar_t__ reg_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static uint8_t
FUNC_0(struct nct_softc *VAR_3, reg_t VAR_4, int VAR_5)
{
 uint8_t VAR_6;

 if (VAR_3->iores != ((void*)0))
  VAR_6 = VAR_0 + VAR_4;
 else if (VAR_5 == 0)
  VAR_6 = VAR_1 + VAR_4;
 else
  VAR_6 = VAR_2 + VAR_4;
 return (VAR_6);
}
