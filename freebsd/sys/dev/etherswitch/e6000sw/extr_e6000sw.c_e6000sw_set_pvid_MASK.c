
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int e6000sw_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ,int) ;

__attribute__((used)) static __inline void
FUNC_3(e6000sw_softc_t *VAR_2, int VAR_3, int VAR_4)
{
 uint32_t VAR_5;

 VAR_5 = FUNC_1(VAR_2, FUNC_0(VAR_2, VAR_3), VAR_0);
 VAR_5 &= ~VAR_1;
 VAR_5 |= (VAR_4 & VAR_1);
 FUNC_2(VAR_2, FUNC_0(VAR_2, VAR_3), VAR_0, VAR_5);
}
