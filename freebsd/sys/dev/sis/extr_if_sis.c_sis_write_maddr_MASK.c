
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct sockaddr_dl {int dummy; } ;
struct sis_softc {int dummy; } ;


 int FUNC_0 (struct sis_softc*,int ,scalar_t__) ;
 int FUNC_1 (struct sockaddr_dl*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct sis_softc*,int ,int) ;
 int FUNC_3 (struct sis_softc*,int ) ;

__attribute__((used)) static u_int
FUNC_4(void *VAR_3, struct sockaddr_dl *VAR_4, u_int VAR_5)
{
 struct sis_softc *VAR_6 = VAR_3;
 uint32_t VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_3(VAR_6, FUNC_1(VAR_4));
 VAR_9 = VAR_7 >> 3;
 VAR_8 = VAR_7 & 0x1F;
 FUNC_0(VAR_6, VAR_1, VAR_0 + VAR_9);
 if (VAR_8 > 0xF)
  VAR_8 -= 0x10;
 FUNC_2(VAR_6, VAR_2, (1 << VAR_8));

 return (1);
}
