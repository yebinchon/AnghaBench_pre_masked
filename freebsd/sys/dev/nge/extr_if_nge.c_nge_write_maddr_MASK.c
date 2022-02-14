
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct sockaddr_dl {int dummy; } ;
struct nge_softc {int dummy; } ;


 int FUNC_0 (struct nge_softc*,int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct sockaddr_dl*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct nge_softc*,int ,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static u_int
FUNC_4(void *VAR_4, struct sockaddr_dl *VAR_5, u_int VAR_6)
{
 struct nge_softc *VAR_7 = VAR_4;
 uint32_t VAR_8;
 int VAR_9, VAR_10;







 VAR_8 = FUNC_3(FUNC_1(VAR_5), VAR_0) >> 21;
 VAR_10 = (VAR_8 >> 4) & 0x7F;
 VAR_9 = VAR_8 & 0xF;
 FUNC_0(VAR_7, VAR_2, VAR_1 + (VAR_10 * 2));
 FUNC_2(VAR_7, VAR_3, (1 << VAR_9));

 return (1);
}
