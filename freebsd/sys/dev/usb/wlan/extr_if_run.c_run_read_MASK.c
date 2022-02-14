
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct run_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct run_softc*,int ,int *,int) ;

__attribute__((used)) static int
FUNC_2(struct run_softc *VAR_0, uint16_t VAR_1, uint32_t *VAR_2)
{
 uint32_t VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, (uint8_t *)&VAR_3, sizeof VAR_3);
 if (VAR_4 == 0)
  *VAR_2 = FUNC_0(VAR_3);
 else
  *VAR_2 = 0xffffffff;
 return (VAR_4);
}
