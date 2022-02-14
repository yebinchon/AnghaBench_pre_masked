
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct rl_softc {int rl_inttask; } ;


 int FUNC_0 (struct rl_softc*,int ) ;
 int FUNC_1 (struct rl_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int *) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_3(void *VAR_6)
{
 struct rl_softc *VAR_7;
 uint16_t VAR_8;

 VAR_7 = VAR_6;

 VAR_8 = FUNC_0(VAR_7, VAR_4);
 if (VAR_8 == 0xFFFF || (VAR_8 & VAR_3) == 0)
                return (VAR_1);
 FUNC_1(VAR_7, VAR_2, 0);

 FUNC_2(VAR_5, &VAR_7->rl_inttask);

 return (VAR_0);
}
