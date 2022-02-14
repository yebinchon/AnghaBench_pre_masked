
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
struct xl_softc {int dummy; } ;
struct sockaddr_dl {int dummy; } ;


 int FUNC_0 (struct xl_softc*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct sockaddr_dl*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static u_int
FUNC_3(void *VAR_4, struct sockaddr_dl *VAR_5, u_int VAR_6)
{
 struct xl_softc *VAR_7 = VAR_4;
 uint16_t VAR_8;

 VAR_8 = FUNC_2(FUNC_1(VAR_5), VAR_0) & 0xFF;
 FUNC_0(VAR_7, VAR_2, VAR_8 | VAR_1 | VAR_3);

 return (1);
}
