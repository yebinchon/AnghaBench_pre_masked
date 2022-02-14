
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct vtbe_softc {int dummy; } ;


 int FUNC_0 () ;

__attribute__((used)) static int
FUNC_1(struct vtbe_softc *VAR_0, uint8_t *VAR_1)
{
 int VAR_2;





 VAR_2 = FUNC_0() & 0x00ffffff;

 VAR_1[0] = 'b';
 VAR_1[1] = 's';
 VAR_1[2] = 'd';
 VAR_1[3] = VAR_2 >> 16;
 VAR_1[4] = VAR_2 >> 8;
 VAR_1[5] = VAR_2 >> 0;

 return (0);
}
