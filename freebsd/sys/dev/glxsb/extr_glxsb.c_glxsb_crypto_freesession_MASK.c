
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct glxsb_softc {int dummy; } ;
struct glxsb_session {int dummy; } ;
typedef int device_t ;
typedef int crypto_session_t ;


 struct glxsb_session* FUNC_0 (int ) ;
 struct glxsb_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct glxsb_session*) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_0, crypto_session_t VAR_1)
{
 struct glxsb_softc *VAR_2 = FUNC_1(VAR_0);
 struct glxsb_session *VAR_3;

 if (VAR_2 == ((void*)0))
  return;

 VAR_3 = FUNC_0(VAR_1);
 FUNC_2(VAR_3);
}
