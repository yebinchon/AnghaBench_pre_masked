
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ipw_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipw_softc*,int ) ;

__attribute__((used)) static uint16_t
FUNC_1(struct ipw_softc *VAR_1)
{
 uint16_t VAR_2;


 if ((VAR_2 = FUNC_0(VAR_1, VAR_0)) == 0)
  VAR_2 = 0x7ff;
 VAR_2 <<= 1;

 return (VAR_2);
}
