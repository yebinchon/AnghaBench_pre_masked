
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iwm_softc {int dummy; } ;


 int FUNC_0 (struct iwm_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct iwm_softc*,int ,int) ;

void
FUNC_2(struct iwm_softc *VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 FUNC_1(VAR_2,
     VAR_0, ((VAR_3 & 0x000fffff) | (3 << 24)));
 FUNC_0(VAR_2);
 FUNC_1(VAR_2, VAR_1, VAR_4);
}
