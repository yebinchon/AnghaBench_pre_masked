
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpio_softc {int dummy; } ;


 int FUNC_0 (struct amdgpio_softc*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct amdgpio_softc*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (struct amdgpio_softc*,int) ;

__attribute__((used)) static bool
FUNC_5(struct amdgpio_softc *VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3, VAR_4;
 bool VAR_5;


 FUNC_0(VAR_1);

 VAR_3 = FUNC_1(VAR_2);
 VAR_4 = FUNC_4(VAR_1, VAR_3);

 if (VAR_4 & FUNC_3(VAR_0))
  VAR_5 = 1;
 else
  VAR_5 = 0;

 FUNC_2(VAR_1);

 return (VAR_5);
}
