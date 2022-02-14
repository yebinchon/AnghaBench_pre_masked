
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct run_softc {int dummy; } ;


 int FUNC_0 (struct run_softc*,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_1(struct run_softc *VAR_0, uint16_t VAR_1, uint32_t VAR_2)
{
 int VAR_3;

 if ((VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2 & 0xffff)) == 0)
  VAR_3 = FUNC_0(VAR_0, VAR_1 + 2, VAR_2 >> 16);
 return (VAR_3);
}
