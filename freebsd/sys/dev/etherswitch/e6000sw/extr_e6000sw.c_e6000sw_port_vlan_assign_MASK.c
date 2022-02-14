
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int e6000sw_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int) ;

__attribute__((used)) static __inline void
FUNC_4(e6000sw_softc_t *VAR_5, int VAR_6, uint32_t VAR_7,
    uint32_t VAR_8)
{
 uint32_t VAR_9;

 VAR_9 = FUNC_2(VAR_5, FUNC_1(VAR_5, VAR_6), VAR_2);
 VAR_9 &= ~(FUNC_0(VAR_5) | VAR_4);
 VAR_9 |= VAR_8 & FUNC_0(VAR_5) & ~(1 << VAR_6);
 VAR_9 |= (VAR_7 << VAR_3) & VAR_4;
 FUNC_3(VAR_5, FUNC_1(VAR_5, VAR_6), VAR_2, VAR_9);
 VAR_9 = FUNC_2(VAR_5, FUNC_1(VAR_5, VAR_6), VAR_0);
 VAR_9 &= ~VAR_1;
 VAR_9 |= (VAR_7 >> 4) & VAR_1;
 FUNC_3(VAR_5, FUNC_1(VAR_5, VAR_6), VAR_0, VAR_9);
}
