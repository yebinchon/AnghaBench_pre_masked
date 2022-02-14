
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_rtc_softc {int * res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static inline void
FUNC_2(struct mv_rtc_softc *VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_0(VAR_8->res[VAR_4], VAR_0);
 VAR_9 &= ~(VAR_5 | VAR_1);
 VAR_9 |= VAR_6 << VAR_7;
 VAR_9 |= VAR_2 << VAR_3;
 FUNC_1(VAR_8->res[VAR_4], VAR_0, VAR_9);
}
