
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct ahd_softc {int dummy; } ;


 int FUNC_0 (struct ahd_softc*,scalar_t__) ;

__attribute__((used)) static __inline uint32_t
FUNC_1(struct ahd_softc *VAR_0, u_int VAR_1)
{
 return (FUNC_0(VAR_0, VAR_1)
       | (FUNC_0(VAR_0, VAR_1+2) << 16));
}
