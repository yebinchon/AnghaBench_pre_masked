
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct safe_softc {int dummy; } ;


 scalar_t__ FUNC_0 (struct safe_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static __inline u_int32_t
FUNC_1(struct safe_softc *VAR_3)
{
 int VAR_4;

 VAR_4 = 0;
 while (FUNC_0(VAR_3, VAR_2) != 0 && ++VAR_4 < VAR_0)
  ;
 return FUNC_0(VAR_3, VAR_1);
}
