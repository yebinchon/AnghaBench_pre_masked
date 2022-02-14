
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_int ;
struct xae_softc {int dummy; } ;
struct sockaddr_dl {int dummy; } ;


 int* FUNC_0 (struct sockaddr_dl*) ;
 int FUNC_1 (struct xae_softc*,int ) ;
 int FUNC_2 (struct xae_softc*,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int VAR_1 ;

__attribute__((used)) static u_int
FUNC_4(void *VAR_2, struct sockaddr_dl *VAR_3, u_int VAR_4)
{
 struct xae_softc *VAR_5 = VAR_2;
 uint32_t VAR_6;
 uint8_t *VAR_7;

 if (VAR_4 >= VAR_1)
  return (1);

 VAR_7 = FUNC_0(VAR_3);

 VAR_6 = FUNC_1(VAR_5, VAR_0) & 0xffffff00;
 VAR_6 |= VAR_4;
 FUNC_2(VAR_5, VAR_0, VAR_6);

 VAR_6 = (VAR_7[0]);
 VAR_6 |= (VAR_7[1] << 8);
 VAR_6 |= (VAR_7[2] << 16);
 VAR_6 |= (VAR_7[3] << 24);
 FUNC_2(VAR_5, FUNC_3(0), VAR_6);

 VAR_6 = VAR_7[4];
 VAR_6 |= VAR_7[5] << 8;
 FUNC_2(VAR_5, FUNC_3(1), VAR_6);

 return (1);
}
