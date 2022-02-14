
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct alc_softc {int* alc_eaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct alc_softc*,int ) ;

__attribute__((used)) static void
FUNC_1(struct alc_softc *VAR_2)
{
 uint32_t VAR_3[2];

 VAR_3[0] = FUNC_0(VAR_2, VAR_0);
 VAR_3[1] = FUNC_0(VAR_2, VAR_1);
 VAR_2->alc_eaddr[0] = (VAR_3[1] >> 8) & 0xFF;
 VAR_2->alc_eaddr[1] = (VAR_3[1] >> 0) & 0xFF;
 VAR_2->alc_eaddr[2] = (VAR_3[0] >> 24) & 0xFF;
 VAR_2->alc_eaddr[3] = (VAR_3[0] >> 16) & 0xFF;
 VAR_2->alc_eaddr[4] = (VAR_3[0] >> 8) & 0xFF;
 VAR_2->alc_eaddr[5] = (VAR_3[0] >> 0) & 0xFF;
}
