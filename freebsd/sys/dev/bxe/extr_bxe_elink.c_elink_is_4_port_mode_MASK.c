
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bxe_softc*,int ) ;

__attribute__((used)) static uint8_t FUNC_1(struct bxe_softc *VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (VAR_3 & (1<<0)) {

  return ((VAR_3 & (1<<1)) == (1<<1));
 }

 return (uint8_t)FUNC_0(VAR_2, VAR_0);
}
