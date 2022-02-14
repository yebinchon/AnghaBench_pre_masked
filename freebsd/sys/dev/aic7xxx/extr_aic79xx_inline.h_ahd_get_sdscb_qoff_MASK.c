
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahd_softc {int dummy; } ;


 int FUNC_0 (struct ahd_softc*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ahd_softc*,scalar_t__) ;

__attribute__((used)) static __inline u_int
FUNC_2(struct ahd_softc *VAR_2)
{
 FUNC_0(VAR_2, VAR_0, VAR_0);
 return (FUNC_1(VAR_2, VAR_1) | (FUNC_1(VAR_2, VAR_1 + 1) << 8));
}
