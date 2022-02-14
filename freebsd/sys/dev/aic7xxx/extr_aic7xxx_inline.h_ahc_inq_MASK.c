
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ u_int ;
struct ahc_softc {int dummy; } ;


 int FUNC_0 (struct ahc_softc*,scalar_t__) ;

__attribute__((used)) static __inline uint64_t
FUNC_1(struct ahc_softc *VAR_0, u_int VAR_1)
{
 return ((FUNC_0(VAR_0, VAR_1))
       | (FUNC_0(VAR_0, VAR_1+1) << 8)
       | (FUNC_0(VAR_0, VAR_1+2) << 16)
       | (FUNC_0(VAR_0, VAR_1+3) << 24)
       | (((uint64_t)FUNC_0(VAR_0, VAR_1+4)) << 32)
       | (((uint64_t)FUNC_0(VAR_0, VAR_1+5)) << 40)
       | (((uint64_t)FUNC_0(VAR_0, VAR_1+6)) << 48)
       | (((uint64_t)FUNC_0(VAR_0, VAR_1+7)) << 56));
}
