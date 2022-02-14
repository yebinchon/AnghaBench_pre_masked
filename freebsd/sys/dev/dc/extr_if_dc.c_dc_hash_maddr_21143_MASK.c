
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct sockaddr_dl {int dummy; } ;
struct TYPE_2__ {int * dc_sbuf; } ;
struct dc_softc {TYPE_1__ dc_cdata; } ;


 int FUNC_0 (struct sockaddr_dl*) ;
 int FUNC_1 (struct dc_softc*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static u_int
FUNC_3(void *VAR_0, struct sockaddr_dl *VAR_1, u_int VAR_2)
{
 struct dc_softc *VAR_3 = VAR_0;
 uint32_t VAR_4;

 VAR_4 = FUNC_1(VAR_3, FUNC_0(VAR_1));
 VAR_3->dc_cdata.dc_sbuf[VAR_4 >> 4] |= FUNC_2(1 << (VAR_4 & 0xF));

 return (1);
}
