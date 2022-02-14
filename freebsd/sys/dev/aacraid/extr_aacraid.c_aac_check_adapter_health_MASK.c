
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
struct aac_softc {int dummy; } ;


 int FUNC_0 (struct aac_softc*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u_int32_t
FUNC_1(struct aac_softc *VAR_2, u_int8_t *VAR_3)
{
 u_int32_t VAR_4;

 VAR_4 = FUNC_0(VAR_2);

 if (VAR_4 & VAR_1)
  VAR_4 = 0;
 else if (VAR_4 & VAR_0 && VAR_3)
  *VAR_3 = (VAR_4 >> 16) & 0xff;

 return (VAR_4);
}
