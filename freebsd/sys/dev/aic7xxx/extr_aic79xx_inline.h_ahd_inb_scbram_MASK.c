
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahd_softc {int bugs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ahd_softc*,int ) ;

__attribute__((used)) static __inline u_int
FUNC_1(struct ahd_softc *VAR_2, u_int VAR_3)
{
 u_int VAR_4;
 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if ((VAR_2->bugs & VAR_0) != 0)
  FUNC_0(VAR_2, VAR_1);
 return (VAR_4);
}
