
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlp_rsa_softc {int dummy; } ;
struct cryptoini {int dummy; } ;
typedef int device_t ;
typedef int crypto_session_t ;


 int VAR_0 ;
 struct xlp_rsa_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, crypto_session_t VAR_2, struct cryptoini *VAR_3)
{
 struct xlp_rsa_softc *VAR_4 = FUNC_0(VAR_1);

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return (VAR_0);

 return (0);
}
