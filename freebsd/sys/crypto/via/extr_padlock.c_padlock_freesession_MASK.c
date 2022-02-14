
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct padlock_softc {int dummy; } ;
struct padlock_session {int dummy; } ;
typedef int device_t ;
typedef int crypto_session_t ;


 struct padlock_session* FUNC_0 (int ) ;
 struct padlock_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct padlock_softc*,struct padlock_session*) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_0, crypto_session_t VAR_1)
{
 struct padlock_softc *VAR_2 = FUNC_1(VAR_0);
 struct padlock_session *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 FUNC_2(VAR_2, VAR_3);
}
