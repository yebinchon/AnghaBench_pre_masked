
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ u_int ;
struct ahd_softc {int dummy; } ;


 int FUNC_0 (struct ahd_softc*,scalar_t__,int) ;

__attribute__((used)) static __inline void
FUNC_1(struct ahd_softc *VAR_0, u_int VAR_1, uint64_t VAR_2)
{
 FUNC_0(VAR_0, VAR_1, VAR_2 & 0xFF);
 FUNC_0(VAR_0, VAR_1+1, (VAR_2 >> 8) & 0xFF);
 FUNC_0(VAR_0, VAR_1+2, (VAR_2 >> 16) & 0xFF);
 FUNC_0(VAR_0, VAR_1+3, (VAR_2 >> 24) & 0xFF);
 FUNC_0(VAR_0, VAR_1+4, (VAR_2 >> 32) & 0xFF);
 FUNC_0(VAR_0, VAR_1+5, (VAR_2 >> 40) & 0xFF);
 FUNC_0(VAR_0, VAR_1+6, (VAR_2 >> 48) & 0xFF);
 FUNC_0(VAR_0, VAR_1+7, (VAR_2 >> 56) & 0xFF);
}
