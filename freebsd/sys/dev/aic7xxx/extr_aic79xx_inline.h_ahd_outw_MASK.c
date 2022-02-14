
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahd_softc {int dummy; } ;


 int FUNC_0 (struct ahd_softc*,int,int) ;

__attribute__((used)) static __inline void
FUNC_1(struct ahd_softc *VAR_0, u_int VAR_1, u_int VAR_2)
{




 FUNC_0(VAR_0, VAR_1, VAR_2 & 0xFF);
 FUNC_0(VAR_0, VAR_1+1, (VAR_2 >> 8) & 0xFF);
}
