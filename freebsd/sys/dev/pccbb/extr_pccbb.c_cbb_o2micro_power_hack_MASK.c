
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct cbb_softc {int * exca; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static uint8_t
FUNC_2(struct cbb_softc *VAR_1)
{
 uint8_t VAR_2;
 VAR_2 = FUNC_0(&VAR_1->exca[0], VAR_0);
 FUNC_1(&VAR_1->exca[0], VAR_0, (VAR_2 & 0xf0) | 1);
 return (VAR_2);
}
